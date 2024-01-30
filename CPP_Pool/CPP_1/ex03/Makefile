SRCS	=	main.cpp \
			HumanB.cpp \
			HumanA.cpp \
			Weapon.cpp \

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	violencia

RM		=	rm -f

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re