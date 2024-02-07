# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/07 03:00:51 by picatrai          #+#    #+#              #
#    Updated: 2024/02/07 03:15:48 by picatrai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BONJOUR_ICI_LE_CERVEAU
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp
OBJ = ${SRC:.cpp=.o}

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