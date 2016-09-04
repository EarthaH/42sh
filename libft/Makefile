# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/16 08:04:07 by cdebruyn          #+#    #+#              #
#    Updated: 2016/08/02 08:56:36 by cdebruyn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC_PATH = ./src/

INCLUDES = /includes/libft.h

SRC = $(SRC_PATH)ft_strlen.c	\
	  $(SRC_PATH)ft_memset.c	\
	  $(SRC_PATH)ft_bzero.c		\
	  $(SRC_PATH)ft_memcpy.c	\
	  $(SRC_PATH)ft_memmove.c	\
	  $(SRC_PATH)ft_memchr.c	\
	  $(SRC_PATH)ft_memcmp.c	\
	  $(SRC_PATH)ft_memalloc.c	\
	  $(SRC_PATH)ft_memdel.c	\
	  $(SRC_PATH)ft_strdup.c	\
	  $(SRC_PATH)ft_strcpy.c	\
	  $(SRC_PATH)ft_strncpy.c	\
	  $(SRC_PATH)ft_strcat.c	\
	  $(SRC_PATH)ft_strncat.c	\
	  $(SRC_PATH)ft_strlcat.c	\
	  $(SRC_PATH)ft_strchr.c	\
	  $(SRC_PATH)ft_strrchr.c	\
	  $(SRC_PATH)ft_strstr.c	\
	  $(SRC_PATH)ft_strnstr.c	\
	  $(SRC_PATH)ft_strcmp.c	\
	  $(SRC_PATH)ft_strncmp.c	\
	  $(SRC_PATH)ft_atoi.c		\
	  $(SRC_PATH)ft_strnew.c	\
	  $(SRC_PATH)ft_strnew2.c	\
	  $(SRC_PATH)ft_strdel.c	\
	  $(SRC_PATH)ft_strclr.c	\
	  $(SRC_PATH)ft_striter.c	\
	  $(SRC_PATH)ft_striteri.c	\
	  $(SRC_PATH)ft_strmap.c	\
	  $(SRC_PATH)ft_strmapi.c	\
	  $(SRC_PATH)ft_strequ.c	\
	  $(SRC_PATH)ft_strnequ.c	\
	  $(SRC_PATH)ft_strsub.c	\
	  $(SRC_PATH)ft_strjoin.c	\
	  $(SRC_PATH)ft_strtrim.c	\
	  $(SRC_PATH)ft_strsplit.c	\
	  $(SRC_PATH)ft_itoa.c		\
	  $(SRC_PATH)ft_putchar.c	\
	  $(SRC_PATH)ft_putstr.c	\
	  $(SRC_PATH)ft_putendl.c	\
	  $(SRC_PATH)ft_putnbr.c	\
	  $(SRC_PATH)ft_putarr.c	\
	  $(SRC_PATH)ft_putchar_fd.c	\
	  $(SRC_PATH)ft_putstr_fd.c	\
	  $(SRC_PATH)ft_putendl_fd.c	\
	  $(SRC_PATH)ft_putnbr_fd.c	\
	  $(SRC_PATH)ft_putarr_fd.c	\
	  $(SRC_PATH)ft_isalpha.c	\
	  $(SRC_PATH)ft_isdigit.c	\
	  $(SRC_PATH)ft_isalnum.c	\
	  $(SRC_PATH)ft_isascii.c	\
	  $(SRC_PATH)ft_isprint.c	\
	  $(SRC_PATH)ft_toupper.c	\
	  $(SRC_PATH)ft_tolower.c	\
	  $(SRC_PATH)ft_lstnew.c	\
	  $(SRC_PATH)ft_lstdelone.c	\
	  $(SRC_PATH)ft_lstdel.c	\
	  $(SRC_PATH)ft_lstadd.c	\
	  $(SRC_PATH)ft_lstiter.c	\
	  $(SRC_PATH)ft_lstmap.c	\
	  $(SRC_PATH)ft_split.c		\
	  $(SRC_PATH)rm_padding.c	\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@echo "Crystal is preparing to make your libft..."
	@$(CC) $(FLAGS) -c $(SRC) -I $(INCLUDES)
	@echo "Crystal has created all your object files..."
	@mv *.o src/
	@echo "Crystal has successfully moved all the object files to src/"	
	@echo "Crystal is preparing to create your libft.."
	@ar rc $(NAME) $(OBJ)
	@ranlib	$(NAME)
	@clear	
	@echo "Crystal has successfully created your libft\n"

clean:
	@rm -f $(OBJ)
	@echo "Crystal has removed all object files.\n"

fclean: clean
	@rm -f $(NAME)
	@echo "Crystal has removed the executable.\n"

re: fclean all
	@clear
	@echo "Crystal has successfully recompiled your libft.\n"

norme:
	norminette $(SRC)
	@echo "Crystal has successfully normed all your source files.\n"
