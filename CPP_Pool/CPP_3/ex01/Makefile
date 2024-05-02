# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/02 13:05:31 by socana-b          #+#    #+#              #
#    Updated: 2024/05/02 13:05:31 by socana-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	scavtrap

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