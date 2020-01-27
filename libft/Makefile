# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/08 17:17:22 by wpoudre           #+#    #+#              #
#    Updated: 2019/09/08 17:17:24 by wpoudre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS =	-Wall -Wextra -Werror

LIB_INC = $(addprefix $(INCLUDES), libft.h)

SRC =           ft_bzero.c\
        		ft_memccpy.c\
        		ft_strncpy.c\
        		ft_memmove.c\
        		ft_strcat.c\
        		ft_strcmp.c\
        		ft_strcpy.c\
        		ft_strdup.c\
        		ft_strlen.c\
        		ft_memchr.c\
        		ft_memcmp.c\
        		ft_memset.c\
        		ft_strncat.c\
        		ft_strlcat.c\
        		ft_strchr.c\
        		ft_strrchr.c\
        		ft_strstr.c\
        		ft_strnstr.c\
        		ft_strncmp.c\
        		ft_atoi.c\
        		ft_isalpha.c\
        		ft_isdigit.c\
        		ft_isalnum.c\
        		ft_isascii.c\
        		ft_isprint.c\
        		ft_toupper.c\
        		ft_tolower.c\
        		ft_memalloc.c\
        		ft_memdel.c\
        		ft_strnew.c\
        		ft_strclr.c\
        		ft_striter.c\
        		ft_striteri.c\
        		ft_strmap.c\
        		ft_strmapi.c\
        		ft_strequ.c\
        		ft_strnequ.c\
        		ft_strsub.c\
        		ft_strjoin.c\
        		ft_strtrim.c\
        		ft_strsplit.c\
        		ft_itoa.c\
        		ft_cu_wards.c\
        		ft_putchar.c\
        		ft_putstr.c\
        		ft_putendl.c\
        		ft_putchar_fd.c\
        		ft_putstr_fd.c\
        		ft_putendl_fd.c\
        		ft_putnbr_fd.c\
        		ft_putnbr.c\
        		ft_memcpy.c\
        		ft_lstnew.c\
        		ft_lstdelone.c\
        		ft_lstdel.c\
        		ft_lstadd.c\
        		ft_lstiter.c\
        		ft_lstmap.c\
        		ft_alpup.c\
        		ft_alpdown.c\
        		ft_lstnelem.c\
        		ft_sqrt.c\
        		ft_pow.c\
        		ft_strndup.c\
        		ft_matdel.c\
        		ft_matcp.c\
        		ft_putmat.c\
        		get_next_line.c\

OBJ = $(patsubst %.c, %.o, $(SRC))

INCLUDES = ../header/

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c $(LIB_INC)
	gcc $(FLAGS) -I $(INCLUDES) -c $<

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
