# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/08 00:59:51 by picatrai          #+#    #+#              #
#    Updated: 2024/02/08 05:32:23 by picatrai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Fixed.cpp
OBJ = ${SRC:.cpp=.o}
INCLUDES = Fixed.hpp

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