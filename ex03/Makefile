NAME = Headshot
SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CPP = c++
RM = rm -rf

all: $(NAME)

$(NAME): $(SRCS)
		@$(CPP) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@$(RM) $(NAME)
fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re