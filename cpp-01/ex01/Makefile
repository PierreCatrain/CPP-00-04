# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/07 02:36:37 by picatrai          #+#    #+#              #
#    Updated: 2024/02/07 02:56:41 by picatrai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Encore_plus_de_cerveaux_!
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = ${SRC:.cpp=.o}
INCLUDES = Zombie.hpp

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