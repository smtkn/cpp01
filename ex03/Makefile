NAME = HUMAN
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

all : $(NAME)

$(NAME):
		@$(CC) $(SRC) $(CFLAGS) -o $(NAME)

clean:
	  @rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re