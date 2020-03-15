NAME = libft.a

SRCS = *.c

OBJECTS = *.o

all: $(NAME)

$(NAME): 
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

