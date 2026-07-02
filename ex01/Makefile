# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alago-ga <alago-ga@student.42berlin.d>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/02 17:25:15 by alago-ga          #+#    #+#              #
#    Updated: 2026/07/02 17:26:40 by alago-ga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombieHorde
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
GREEN		= \033[0;32m
BLUE		= \033[0;36m
RESET		= \033[0m
SRCS		= Zombie.cpp main.cpp zombieHorde.cpp
OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(NAME) created successfully!$(RESET)"
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	@echo "$(BLUE)Cleaning object$(RESET)"
	rm -f $(OBJS)
	@echo "$(GREEN)Sucessfully cleaned$(RESET)"
fclean: clean
	@echo "$(BLUE)Cleaning executable$(RESET)"
	rm -f $(NAME)
	@echo "$(GREEN)Sucessfully cleaned$(RESET)"
re: fclean all

.PHONY: all clean fclean re
