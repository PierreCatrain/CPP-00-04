# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/07 05:09:49 by picatrai          #+#    #+#              #
#    Updated: 2024/02/07 07:14:43 by picatrai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sed
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Sed.cpp
OBJ = ${SRC:.cpp=.o}
INCLUDES = Sed.hpp

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