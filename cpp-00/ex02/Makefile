# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/10 02:07:34 by picatrai          #+#    #+#              #
#    Updated: 2024/02/10 02:09:33 by picatrai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = out
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = tests.cpp Account.cpp
OBJ = ${SRC:.cpp=.o}
INCLUDES = Account.hpp

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