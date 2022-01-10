# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 19:21:39 by msanjuan          #+#    #+#              #
#    Updated: 2022/01/09 21:34:10 by msabwat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME=test-framework

FLAGS= -g -Wall -Wextra -Werror

FRAMEWORK_PATH=../

CC=clang

INC=-I.

SRC_NAME= ft_strlen/00_launcher.c \
		  ft_strlen/01_basic_test.c \
	      ft_strlen/02_bigger_str_test.c \
	      ft_strlen/03_null_test.c \
		  ft_atoi/00_launcher.c \
	      ft_atoi/01_atoi_basic_test.c \
		  ft_atoi/02_atoi_neg_test.c \
		  ft_atoi/03_atoi_blanks_test.c \
		  ft_atoi/04_atoi_intmax_test.c \
		  ft_atoi/05_atoi_intmin_test.c \
		  ft_atoi/06_atoi_plussign_test.c \
		  ft_split/00_launcher.c \
		  ft_split/01_split_basic.c \
		  ft_split/02_split_nosep.c \
		  ft_split/03_split_emptystr.c \
		  ft_split/04_split_onlysep.c \
		  ft_strncat/00_launcher.c \
		  ft_strncat/01_strncat_basic_concat.c \
		  ft_strncat/02_strncat_sizezero.c \
		  ft_strncat/03_strncat_nodst.c \
		  ft_strncat/04_strncat_nosrc.c


OBJ_NAME=$(SRC_NAME:.c=.o)

OBJ_PATH=.obj

OBJS=$(addprefix $(OBJ_PATH)/,$(OBJ_NAME)) 

all: makedir $(NAME)

test: FLAGS += -g
test: makedir $(NAME)
	./$(NAME)
makedir:
	@mkdir -p .obj
	@mkdir -p .obj/ft_atoi
	@mkdir -p .obj/ft_strlen
	@mkdir -p .obj/ft_split
	@mkdir -p .obj/ft_strncat

$(NAME): $(OBJS) $(FRAMEWORK_PATH)../framework/libunit.a $(FRAMEWORK_PATH)../framework/libft/libft.a $(FRAMEWORK_PATH)Libft/libft.a
	$(CC) $(INC) -I$(FRAMEWORK_PATH)Libft -I$(FRAMEWORK_PATH)../framework/libft/ $(FLAGS) main.c $(OBJS)  $(FRAMEWORK_PATH)../framework/libunit.a $(FRAMEWORK_PATH)../framework/libft/libft.a $(FRAMEWORK_PATH)Libft/libft.a -o $(NAME)

$(FRAMEWORK_PATH)../framework/libunit.a: 
	make -C $(FRAMEWORK_PATH)../framework

$(FRAMEWORK_PATH)../framework/libft/libft.a: 
	make -C $(FRAMEWORK_PATH)../framework/libft

$(FRAMEWORK_PATH)Libft/libft.a:
	make -C $(FRAMEWORK_PATH)Libft

$(OBJ_PATH)/%.o: %.c
	$(CC) $(INC) -I$(FRAMEWORK_PATH)Libft $(FLAGS) -c $< -o $@

clean:
	rm -fr $(NAME)

fclean: clean
	rm -fr $(OBJ_PATH)
	make clean -C $(FRAMEWORK_PATH)../framework
	make clean -C $(FRAMEWORK_PATH)../framework/libft
	make clean -C $(FRAMEWORK_PATH)Libft

re: fclean all
