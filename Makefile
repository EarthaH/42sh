NAME = minishell

CC = clang

CFLAGS = -Wall -Wextra -Werror -g

SRC_PATH = ./src/

INCL = includes/minishell.h

LIB_INCL = -L. libft/libft.h

LIB_A = -lm libft/libft.a

SRC =	$(SRC_PATH)main.c				\
		$(SRC_PATH)read_line.c			\
		$(SRC_PATH)split_commands.c		\
		$(SRC_PATH)env.c				\
		$(SRC_PATH)re_malloc.c			\
		$(SRC_PATH)exit.c				\
	  
BIN =  $(SRC:.c=.o)

BIN_2 = $(INCL:.h=.h.gch)

BIN_3 = $(LIB_INCL:.h=.h.gch)

define colorecho
      @tput setaf 14
      @echo $1
      @tput sgr0
endef

define colorecho2
      @tput setaf 2
      @echo $1
      @tput sgr0
endef

all: $(NAME)

$(NAME): qme
	@$(call colorecho,"\nPreparing to compile minishell...")
	@make re -C libft/
	@$(CC) $(C_FLAGS) -c $(SRC) $(INCL)
	@mv *.o src/
	@$(call colorecho,"Library has successfully compiled and object" \
		"files have been created and moved to src/")
	@$(CC) $(C_FLAGS) $(BIN) $(LIB_INCL) $(LIB_A)
	@mv ./a.out ./minishell
	@clear
	@$(call colorecho, "Minishell has successfully been compiled.\n")
	@rm -f $(BIN)

clean:
	@rm -f $(BIN_2) $(BIN_3)
	@$(call colorecho, "All object files have been removed. Please" \
		"ensure no sourcefiles have accidently been removed.")
	@make clean -C libft/

fclean: clean
	@rm -f $(NAME)
	@make fclean -C libft/
	@$(call colorecho, "The executables ./minishell and " \
		"./libft has been removed")

re: fclean all
	@clear
	@$(call colorecho, "Minishell has successfully recompiled.\n")

format: norme me
	@$(call colorecho2, "All good!")

norme:
	@$(call colorecho2, "Normenette:\n")
	@norminette $(SRC) $(INCL)

me: qme
	@$(call colorecho2, "Author:")
	cat -e author

qme:
	@rm -Rf author
	@whoami > author
