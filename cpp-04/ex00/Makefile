# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/09 01:46:52 by picatrai          #+#    #+#              #
#    Updated: 2024/02/09 05:49:27 by picatrai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJ = ${SRC:.cpp=.o}
INCLUDES = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp

%.o: %.cpp
	${CC} ${CFLAGS} -c -o $@ $<

${NAME}: ${OBJ}
	${CC} ${CFLAGS} -o ${NAME} ${OBJ}

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all