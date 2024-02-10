# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/10 01:08:29 by picatrai          #+#    #+#              #
#    Updated: 2024/02/10 01:08:40 by picatrai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJ = ${SRC:.cpp=.o}
INCLUDES = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

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