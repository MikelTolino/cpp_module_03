# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 17:48:32 by mmateo-t          #+#    #+#              #
#    Updated: 2022/05/25 13:26:31 by mmateo-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX:= clang++
CFLAGS:= -Wall -Werror -Wextra
CPPSTD:= -std=c++98
SRCS:= $(wildcard *.cpp)
OBJS:= $(SRCS:%.cpp=%.o)
NAME:= FragTrap
RM:= rm -rf

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CFLAGS) $(CPPSTD) $(OBJS) -o $@

%.o: %.c
	$(CXX) $(CFLAGS) $(CPPSTD) -c $(SRCS) -o $@

clean:
	@echo "Cleaning Objects"
	$(RM) $(OBJS)

fclean: clean
	@echo "Cleaning Objects and $(NAME)"
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re $(NAME)
