# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evportel <evportel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/05 10:41:40 by evportel          #+#    #+#              #
#    Updated: 2023/05/19 17:29:54 by evportel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES			= ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c	ft_isprint.c\
				ft_memset.c		ft_strlen.c		ft_bzero.c		ft_memcpy.c		ft_memmove.c\
				ft_strlcpy.c	ft_strlcat.c	ft_toupper.c	ft_tolower.c	ft_strchr.c\
				ft_strrchr.c	ft_strncmp.c	ft_memchr.c		ft_memcmp.c		ft_strnstr.c\
				ft_atoi.c		ft_calloc.c		ft_strdup.c		ft_substr.c		ft_strjoin.c\
				ft_strtrim.c	ft_split.c		ft_itoa.c		ft_strmapi.c	ft_striteri.c\
				ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c

OBJECTS			= $(SOURCES:%.c=%.o)

SOURCES_BONUS	= ft_lstnew_bonus.c

OBJECTS_BONUS	= $(SOURCES_BONUS:%.c=%.o)

NAME			= libft.a
CC				= cc
FLAGS			= -Wall -Wextra -Werror
RM				= rm -f

# MAKE
all:			$(NAME)

$(NAME):		$(OBJECTS)
				ar -rcs $(NAME) $(OBJECTS)

%.o:			%.c
				$(CC) $(FLAGS) -I ./libft.h -c $< -o $@

# MAKE BONUS
bonus:			$(OBJECTS_BONUS)
				ar -rcs $(NAME) $(OBJECTS_BONUS)

clean:
	$(RM) $(OBJECTS) $(OBJECTS_BONUS)

fclean:			clean
	$(RM) $(NAME)

re: fclean all
