# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 17:48:32 by mmateo-t          #+#    #+#              #
#    Updated: 2022/05/04 17:22:36 by mmateo-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC:= clang
CXX:= clang++
CFLAGS:= -Wall -Werror -Wextra
CPPSTD:= -std=c++98
SRCS:= $(wildcard *.cpp)
OBJS:= $(SRCS:%.cpp=%.o)
NAME:= ClapTrap

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CFLAGS) $(CPPSTD) $(OBJS) -o $@

%.o: %.c
	$(CXX) $(CFLAGS) $(CPPSTD) -c $(SRCS) -o $@

clean:
	rm -fv $(OBJS)

fclean: clean
	rm -fv $(NAME)

re: fclean all

.PHONY: all fclean clean re