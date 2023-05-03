SOURCES			= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
				ft_isprint.c ft_memset.c ft_strlen.c ft_bzero.c

OBJECTS			= $(SOURCES:%.c=%.o)

NAME			= libft.a
CC				= cc
FLAGS			= -Wall -Wextra -Werror
RM				= rm -f

all:			$(NAME)

$(NAME):	$(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

objs/%.o:		srcs/%.c
	$(CC) $(FLAGS) -I ./libft.h -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean:			clean
	$(RM) $(NAME)

re: fclean clean all
