NAME = libft.a

SRCS = *.c

OBJECTS = *.o

HEADER = libft.h

all: $(NAME)

$(NAME): 
	gcc -I $(HEADER) -c $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
