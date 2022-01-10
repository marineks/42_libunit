# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/02 23:14:41 by msabwat           #+#    #+#              #
#    Updated: 2022/01/09 21:38:18 by msabwat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libunit.a

FLAGS= -Wall -Wextra -Werror

CC=clang

INC=-I.

SRC_NAME=load.c \
	launch.c \
	print_results.c \
	sig_handlers.c
OBJ_NAME=$(SRC_NAME:.c=.o)

SRC_PATH=src

OBJ_PATH=.obj

SRC=$(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJS=$(addprefix $(OBJ_PATH)/,$(OBJ_NAME)) 

DEPS=libft/libft.a

all: makedir $(NAME)

test: FLAGS += -g 
test: makedir $(NAME)
	make test -C ../tests

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
	make fclean -C ../tests
	make fclean -C libft

re: fclean all
