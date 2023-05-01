SOURCES			= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
				ft_isprint.c ft_memset.c
SOURCES			:= $(addprefix ./srcs/,$(SOURCES))

OBJECTS			= $(SOURCES:./srcs/%.c=./objs/%.o)

NAME			= libft.a
CC				= gcc
FLAGS			= -Wall -Wextra -Werror
RM				= rm -f

all:			mkdir_objs $(NAME)

mkdir_objs:
	mkdir -p objs

$(NAME):	$(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

objs/%.o:		srcs/%.c
	$(CC) $(FLAGS) -I ./include -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean:			clean
	$(RM) $(NAME)

re: fclean clean all
