# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/02 13:05:31 by socana-b          #+#    #+#              #
#    Updated: 2024/10/19 11:51:49 by socana-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp

CXX		=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	zoo

RM		=	rm -f

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re