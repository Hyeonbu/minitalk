# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chanjeon <chanjeon@student.42seoul.kr      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/15 22:21:44 by chanjeon          #+#    #+#              #
#    Updated: 2022/01/30 18:22:40 by chanjeon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	   ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
	   ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	   ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	   ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	   ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	   ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	   ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	   ft_putnbr_fd.c ft_strncmp.c
SRCS_BNS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		   ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		   ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)
OBJS_BNS = $(SRCS_BNS:.c=.o)

all : $(NAME)

clean :
	rm -f $(OBJS) $(OBJS_BNS)

fclean : clean
	rm -f $(NAME)

re : fclean all

$(NAME) : $(OBJS)
	ar rcs $@ $^

bonus : $(OBJS_BNS)
	ar rcs $(NAME) $^

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY : all clean fclean re bonus
