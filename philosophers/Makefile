SRCS	=	philo.c\
			error.c\
			threadReady.c\
			utils/ft_atoi.c

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

OBJS	=	$(SRCS:.c=.o)

NAME	=	philo

RM		=	rm -f

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) -lpthread $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re