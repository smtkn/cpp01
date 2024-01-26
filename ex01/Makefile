NAME = Moarbrainz
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Zombie.cpp main.cpp ZombieHorde.cpp

all : $(NAME)

$(NAME):
		@$(CC) $(SRC) $(CFLAGS) -o $(NAME)

clean:
	  @rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re