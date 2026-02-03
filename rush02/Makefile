# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/23 23:29:59 by gigarcia          #+#    #+#              #
#    Updated: 2026/02/01 16:20:40 by gblas-he         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = main.c read_dict.c parse_utils.c cleanup.c solver.c solver_utils.c string_utils.c

OBJS = $(SRCS:.c=.o)

RM = rm -f

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all