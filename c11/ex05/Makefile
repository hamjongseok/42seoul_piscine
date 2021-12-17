NAME = do-op
SRC = main.c ft_atoi.c ft_putnbr.c ft_strcmp.c op.c 

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

clean:
	rm -f *.o

re: fclean all
