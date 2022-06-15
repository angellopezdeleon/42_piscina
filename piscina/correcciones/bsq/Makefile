# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlozano- <jlozano-@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/28 13:43:51 by jlozano-          #+#    #+#              #
#    Updated: 2022/05/28 16:28:02 by jlozano-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c search_square.c fill_matrix.c ft_strlen_x_y.c

OBJS	= ${SRCS:.c=.o}

NAME	= bsq

CC		= gcc
rm		= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all