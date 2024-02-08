# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/08 07:04:17 by picatrai          #+#    #+#              #
#    Updated: 2024/02/08 07:18:43 by picatrai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp ClapTrap.cpp
OBJ = ${SRC:.cpp=.o}
INCLUDES = ClapTrap.hpp

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