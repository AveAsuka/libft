# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rabderus <rabderus@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 21:27:33 by rabderus          #+#    #+#              #
#    Updated: 2021/10/27 21:31:00 by rabderus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
				ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
				ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c \
				ft_striteri.c ft_strjoin.c ft_strlcpy.c ft_strlcat.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
				ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c 
				
OBJS		= ${SRCS:.c=.o}

BONUS		= ft_lstnew.c ft_lstadd_front.c

BONUS_OBJS	= $(BONUS:.c=.o)

CC			= gcc
AR			= ar rc
FLAGS		= -Wall -Wextra -Werror
RM			= rm -f
HEADER		= libft.h

all:	${NAME}

${NAME}:	${OBJS}
			${AR} ${NAME} $?
# $? - это перекомпилирование на случай редакции

# проверить бонусы на релинки!
bonus:	$(OBJS) $(BONUS_OBJS)
			ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

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