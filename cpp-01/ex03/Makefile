# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/07 03:26:51 by picatrai          #+#    #+#              #
#    Updated: 2024/02/07 03:33:43 by picatrai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Violence_inutile
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ = ${SRC:.cpp=.o}
INCLUDES = HumanA.cpp HumanB.cpp Weapon.cpp

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