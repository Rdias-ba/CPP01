# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/24 13:47:59 by rdias-ba          #+#    #+#              #
#    Updated: 2024/02/24 15:40:50 by rdias-ba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
CC = c++
Flags = -Wextra -Werror -Wall -std=c++98
VPATH = srcs
Includes = -I ./headers

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)
OBJS_DIR = objs

all: $(NAME)

$(NAME): $(OBJS_DIR) $(OBJS)
		$(CC) $(Flags) $(OBJS) -o $@

$(OBJS_DIR):
		mkdir -p $@

$(OBJS_DIR)/%.o: %.cpp
		$(CC) $(Flags) $(Includes) -c $< -o $@

clean:
		rm -rf $(OBJS_DIR)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re run
 