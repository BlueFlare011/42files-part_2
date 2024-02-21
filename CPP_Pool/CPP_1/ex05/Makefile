SRCS	=	main.cpp \
			Harl.cpp

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	harl

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