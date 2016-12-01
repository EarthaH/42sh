# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/21 10:10:24 by cdebruyn          #+#    #+#              #
#    Updated: 2016/12/01 12:54:59 by cdebruyn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCL = libft.h

SRC1 =	ft_atoi.c				\
		ft_array_push3.c		\
		ft_int_array_push3.c	\
		ft_array_to_int.c		\
		ft_bzero.c				\
		ft_error.c				\
		ft_intlen.c				\
		ft_intlen2.c			\
		ft_isalnum.c			\
		ft_isalpha.c			\
		ft_isascii.c			\
		ft_isdigit.c			\
		ft_isprint.c			\
		ft_itoa.c				\
		ft_lstadd.c				\
		ft_lstdel.c				\
		ft_lstdelone.c			\
		ft_lstiter.c			\
		ft_lstmap.c				\
		ft_lstnew.c				\
		get_next_line.c			\

SRC2 =	ft_matrix_add.c			\
		ft_matrix_create.c		\
		ft_matrix_multiply.c	\
		ft_matrix_destroy.c		\
		ft_matrix_identity.c	\
		ft_matrix_subtract.c	\
		ft_matrix_transpose.c	\
		ft_matrix_translation.c	\
		ft_matrix_scale.c		\
		ft_memalloc.c			\
		ft_memccpy.c			\
		ft_memchr.c				\
		ft_memcmp.c				\
		ft_memcpy.c				\
		ft_memcpy_bwd.c			\
		ft_memdel.c				\
		ft_memmove.c			\
		ft_memset.c				\
		ft_print_hex.c			\
		ft_print_memory.c		\
		ft_put2d.c				\
		ft_putchar.c			\
		ft_putchar_fd.c			\
		ft_putendl.c			\
		ft_putendl_fd.c			\
		ft_putnbr.c				\
		ft_putnbr_fd.c			\
		ft_putstr.c				\
		ft_putstr_fd.c			\

SRC3 =	ft_strcat.c				\
		ft_strchr.c				\
		ft_strclr.c				\
		ft_strcmp.c				\
		ft_strcpy.c				\
		ft_strdel.c				\
		ft_strdup.c				\
		ft_strequ.c				\
		ft_striter.c			\
		ft_striteri.c			\
		ft_strjoin.c			\
		ft_strlcat.c			\
		ft_strlen.c				\
		ft_strlen2.c			\
		ft_strlen3.c			\
		ft_putarr.c				\
		ft_isalpha2.c			\
		ft_toupper2.c			\

SRC4 =	ft_strmap.c				\
		ft_strmapi.c			\
		ft_strncat.c			\
		ft_strncmp.c			\
		ft_strncpy.c			\
		ft_strnequ.c			\
		ft_strnew.c				\
		ft_strnew2.c			\
		ft_strnstr.c			\
		ft_strrchr.c			\
		ft_strsplit.c			\
		ft_strstr.c				\
		ft_strsub.c				\
		ft_strtrim.c			\
		ft_tolower.c			\
		ft_toupper.c			\
		rm_padding.c			\
		ft_x_rotation.c			\
		ft_y_rotation.c			\
		ft_z_rotation.c			\

SRCO1 =	$(SRC1:.c=.o)
SRCO2 = $(SRC2:.c=.o)
SRCO3 = $(SRC3:.c=.o)
SRCO4 = $(SRC4:.c=.o)

CFLAGS = -Wall -Wextra -Werror

$(NAME):
	@clang $(CFLAGS) -c $(SRC1) $(SRC2) $(SRC3) $(SRC4) -I $(INCL)
	@ar rc $(NAME) $(SRCO1) $(SRCO2) $(SRCO3) $(SRCO4)
	@ranlib $(NAME)

all: $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

norme:
	norminette $(SRC1)
	norminette $(SRC2)
	norminette $(SRC3)
	norminette $(SRC4)

.PHONY: all clean fclean re
