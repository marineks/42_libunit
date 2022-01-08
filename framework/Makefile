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

NAME=libunit.a

FLAGS= -Wall -Wextra -Werror

CC=clang

INC=-I.

SRC_NAME=load.c \
	launch.c
OBJ_NAME=$(SRC_NAME:.c=.o)

SRC_PATH=src

OBJ_PATH=.obj

SRC=$(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJS=$(addprefix $(OBJ_PATH)/,$(OBJ_NAME)) 

all: makedir $(NAME)

test: FLAGS += -g -fsanitize=address,undefined
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
