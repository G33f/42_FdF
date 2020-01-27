# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/27 10:34:56 by wpoudre           #+#    #+#              #
#    Updated: 2020/01/27 10:35:01 by wpoudre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= fdf

SOURSE_DIRS		:= srcs srcs/fdf/color srcs/fdf/control srcs/fdf/draw srcs/fdf/drow srcs/fdf/main srcs/fdf/qvaterneon srcs/fdf/random srcs/fdf/rotation srcs/fdf/valid_and_count

FLAGS			= -Wall -Werror -Wextra

framework		= -L minilibx -lmlx -framework OpenGL -framework AppKit -L libft -lft

SEARCH_WILDCARDS:= $(addsuffix /*.c, $(SOURSE_DIRS))

OBJECTS			= $(notdir $(patsubst %.c,%.o, $(wildcard $(SEARCH_WILDCARDS))))

GNL				= libft/get_next_line.c

SRC_LIBFT		= libft

all: $(NAME)

$(NAME): $(OBJECTS)
	make -C $(SRC_LIBFT)
	gcc $(GNL) $^ -o $@ $(framework)

VPATH := $(SOURSE_DIRS)

%.o: %.c
	gcc $(FLAGS) $(compile_flags) -c $< -I header/

clean:
	make clean -C libft
	rm -rf *.o

fclean: clean
	make fclean -C libft
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
