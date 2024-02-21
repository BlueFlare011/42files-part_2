SRCS	=	randomChump.cpp \
			newZombie.cpp \
			Zombie.cpp \
			main.cpp

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	zombie

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
