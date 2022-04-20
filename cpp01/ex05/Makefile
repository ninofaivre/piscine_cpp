# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 10:25:16 by nfaivre           #+#    #+#              #
#    Updated: 2022/04/20 18:35:14 by nfaivre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DEFAULT_GOAL = all

NAME = Harl

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

VPATH =
DIR_SRC = srcs
DIR_OBJ = .obj

INCLUDE = -I./$(DIR_SRC)

SRC = $(wildcard $(DIR_SRC)/*.cpp)
OBJ = $(addprefix $(DIR_OBJ)/, $(notdir $(SRC:.cpp=.o)))

mkdir_DIR_OBJ:
	mkdir -p $(DIR_OBJ)

$(DIR_OBJ)/%.o : $(DIR_SRC)/%.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $< $(INCLUDE)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all: mkdir_DIR_OBJ $(OBJ) $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -rf $(DIR_OBJ)

re: fclean all

.PHONY: all clean fclean re
