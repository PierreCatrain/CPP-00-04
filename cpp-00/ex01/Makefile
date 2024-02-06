# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/06 00:52:25 by picatrai          #+#    #+#              #
#    Updated: 2024/02/06 01:41:01 by picatrai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Contact.cpp PhoneBook.cpp
OBJ = ${SRC:.cpp=.o}
INCLUDES = Contact.hpp PhoneBook.hpp

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