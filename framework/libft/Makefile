#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/02 23:14:41 by msabwat           #+#    #+#              #
#    Updated: 2021/01/28 01:13:59 by msabwat          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME=libft.a

FLAGS= -Wall -Wextra -Werror

CC=clang

INC=-I.

SRC_NAME=ft_atoi.c		\
	ft_bzero.c		\
	ft_cntdelimwords.c	\
	ft_isalnum.c		\
	ft_isalpha.c		\
	ft_isascii.c		\
	ft_isdigit.c		\
	ft_isprint.c		\
	ft_isword.c		\
	ft_itoa.c		\
	ft_lstadd.c		\
	ft_lstcmp.c		\
	ft_lstdel.c		\
	ft_lstdelone.c		\
	ft_lstiter.c		\
	ft_lstlen.c		\
	ft_lstmap.c		\
	ft_lstnew.c		\
	ft_lstswap.c		\
	ft_memalloc.c		\
	ft_memccpy.c		\
	ft_memchr.c		\
	ft_memcmp.c		\
	ft_memcpy.c		\
	ft_memdel.c		\
	ft_memmove.c		\
	ft_memset.c		\
	ft_putchar.c		\
	ft_putchar_fd.c		\
	ft_putendl.c		\
	ft_putendl_fd.c		\
	ft_putnbr.c		\
	ft_putnbr_fd.c		\
	ft_putstr.c		\
	ft_putstr_fd.c		\
	ft_putptr.c	\
	ft_strcat.c		\
	ft_strchr.c		\
	ft_strclr.c		\
	ft_strcmp.c		\
	ft_strcpy.c		\
	ft_strdel.c		\
	ft_strdup.c		\
	ft_strequ.c		\
	ft_striter.c		\
	ft_striteri.c		\
	ft_strjoin.c		\
	ft_strlcat.c		\
	ft_strlen.c		\
	ft_strmap.c		\
	ft_strmapi.c		\
	ft_strncat.c		\
	ft_strncmp.c		\
	ft_strncpy.c		\
	ft_strnequ.c		\
	ft_strnew.c		\
	ft_strnstr.c		\
	ft_strrchr.c		\
	ft_strsplit.c		\
	ft_strstr.c		\
	ft_strsub.c		\
	ft_strtrim.c		\
	ft_swap.c		\
	ft_tolower.c		\
	ft_toupper.c		\
	get_next_line.c		\
	ft_stack.c

OBJ_NAME=$(SRC_NAME:.c=.o)

SRC_PATH=src

OBJ_PATH=.obj

SRC=$(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJS=$(addprefix $(OBJ_PATH)/,$(OBJ_NAME)) 

all: makedir $(NAME)

test: FLAGS += -g -fsanitize=address
test: makedir $(NAME)

makedir:
	@mkdir -p .obj

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	$(CC) $(INC) $(FLAGS) -c $< -o $@

clean:
	rm -fr $(NAME)

fclean: clean
	rm -fr $(OBJ_PATH)

re: fclean all
