# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chanjeon <chanjeon@student.42seoul.kr      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 04:17:20 by chanjeon          #+#    #+#              #
#    Updated: 2022/07/19 17:31:11 by chanjeon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MINITALK

SRCS_S = server.c utils.c
SRCS_C = client.c utils.c
OBJS_S = $(SRCS_S:.c=.o)
OBJS_C = $(SRCS_C:.c=.o)

SRCS_S_BONUS = server_bonus.c utils_bonus.c
SRCS_C_BONUS = client_bonus.c utils_bonus.c
OBJS_S_BONUS = $(SRCS_S:.c=.o)
OBJS_C_BONUS = $(SRCS_C:.c=.o)
	
CC = gcc
CFLAGS = -Wall -Wextra -Werror

$(NAME) : all

all : server client

bonus : server_bonus client_bonus

server : $(OBJS_S)
		make -C libft
		$(CC) -o $@ $^ -I./ -Llibft -lft

client : $(OBJS_C)
		make -C libft
		$(CC) -o $@ $^ -I./ -Llibft -lft

server_bonus : $(OBJS_S_BONUS)
		make -C libft
		$(CC) -o server $^ -I./  -Llibft -lft

client_bonus : $(OBJS_C_BONUS)
		make -C libft
		$(CC) -o client $^ -I./ -Llibft -lft

%.o : %.c 
		$(CC) -c $(CFLAGS) $? 

clean:
		rm -f $(OBJS_S) $(OBJS_C)
		make -C libft clean

fclean: clean
		rm -f server client libft/libft.a

re: fclean all
