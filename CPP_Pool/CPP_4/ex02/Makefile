# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blueflare011 <blueflare011@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/02 13:05:31 by socana-b          #+#    #+#              #
#    Updated: 2024/10/05 21:54:15 by blueflare01      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			Brain.cpp

CXX		=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	abstract

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