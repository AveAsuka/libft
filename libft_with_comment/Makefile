# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rabderus <rabderus@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 21:27:33 by rabderus          #+#    #+#              #
#    Updated: 2021/11/11 20:49:56 by rabderus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
				ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
				ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
				ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
				ft_split.c ft_strchr.c ft_strdup.c  ft_striteri.c \
				ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
				ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
				ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c 
				
OBJS		= ${SRCS:.c=.o}

BONUS		= 	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
				ft_lstmap.c

BONUS_OBJS	= $(BONUS:.c=.o)

CC			= gcc
AR			= ar rcs
#s - в архиве будут пронумерованы файлы
FLAGS		= -Wall -Wextra -Werror
RM			= rm -f
HEADER		= libft.h

all:	${NAME}

${NAME}:	${OBJS}
			${AR} ${NAME} $?
# $? - это перекомпилирование на случай редакции

bonus: 
	@make OBJS="$(BONUS_OBJS)" all
# @ не отображает процесс команды в терминале

# если в хедере и или в мэйкфайле что то поменялось, то перекомпиль обджексыыы
${OBJS} : ${HEADER} Makefile

.c.o:	
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}
# неправильно  раньше написал - надо было зависимость поставить через новую строку

clean:	
		${RM} ${OBJS} $(BONUS_OBJS)
		
fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re bonus

# Примечания:
#  -std=c99 если рестрикт используем - так написано в сабджекте