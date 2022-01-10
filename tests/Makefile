# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/02 23:14:41 by msabwat           #+#    #+#              #
#    Updated: 2022/01/09 22:29:48 by msabwat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=test-framework

FLAGS= -g -Wall -Wextra -Werror

FRAMEWORK_PATH=../framework

CC=clang

INC=-I.

SRC_NAME= basic_tests/00_launcher.c \
		  basic_tests/01_ok_test.c \
	      basic_tests/02_ko_test.c \
	      basic_tests/03_sigsegv_test.c \
	      basic_tests/04_buserror_test.c \
	      basic_tests/05_sigfpe_test.c \
	      basic_tests/06_sigill_test.c \
		  basic_tests/07_sigabort_test.c \
		  basic_tests/08_sigpipe_test.c

OBJ_NAME=$(SRC_NAME:.c=.o)

OBJ_PATH=.obj

OBJS=$(addprefix $(OBJ_PATH)/,$(OBJ_NAME)) 

all: makedir $(NAME)

test: FLAGS += -g
test: makedir $(NAME)
	./$(NAME)
makedir:
	@mkdir -p .obj
	@mkdir -p .obj/basic_tests

$(NAME): $(OBJS) $(FRAMEWORK_PATH)/libunit.a $(FRAMEWORK_PATH)/libft/libft.a
	$(CC) $(INC) -I$(FRAMEWORK_PATH) $(FLAGS) main.c $(OBJS) $(FRAMEWORK_PATH)/libunit.a $(FRAMEWORK_PATH)/libft/libft.a -o $(NAME)

$(FRAMEWORK_PATH)/libunit.a: 
	make -C $(FRAMEWORK_PATH)

$(FRAMEWORK_PATH)/libft/libft.a:
	make -C $(FRAMEWORK_PATH)/libft

$(OBJ_PATH)/%.o: %.c
	$(CC) $(INC) -I$(FRAMEWORK_PATH) $(FLAGS) -c $< -o $@

clean:
	rm -fr $(NAME)

fclean: clean
	rm -fr $(OBJ_PATH)
	make clean -C $(FRAMEWORK_PATH)
	make clean -C $(FRAMEWORK_PATH)/libft

re: fclean all
