# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evportel <evportel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/05 10:41:40 by evportel          #+#    #+#              #
#    Updated: 2023/05/08 10:09:43 by evportel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES			= ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c	ft_isprint.c\
				ft_memset.c		ft_strlen.c		ft_bzero.c		ft_memcpy.c		ft_memmove.c\
				ft_strlcpy.c	ft_strlcat.c	ft_toupper.c	ft_tolower.c	ft_strchr.c\
				ft_strrchr.c	ft_strncmp.c

OBJECTS			= $(SOURCES:%.c=%.o)

NAME			= libft.a
CC				= cc
FLAGS			= -Wall -Wextra -Werror
RM				= rm -f

all:			$(NAME)

$(NAME):	$(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

# objs/%.o:		srcs/%.c
%.o:		%.c
	$(CC) $(FLAGS) -I ./libft.h -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean:			clean
	$(RM) $(NAME)

re: fclean clean all
