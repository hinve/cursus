# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hpino-mo <hpino-mo@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 16:48:33 by hpino-mo          #+#    #+#              #
#    Updated: 2023/10/17 15:08:35 by hpino-mo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalnum.c 	\
		ft_isdigit.c 	\
		ft_isalpha.c 	\
		ft_isascii.c 	\
		ft_isprint.c 	\
		ft_strlen.c 	\
		ft_memchr.c 	\
		ft_memcmp.c 	\
		ft_memcpy.c 	\
		ft_memset.c 	\
		ft_memmove.c	\
		ft_bzero.c 		\
		ft_strchr.c 	\
		ft_strrchr.c 	\
		ft_strlcat.c 	\
		ft_strlcpy.c 	\
		ft_toupper.c 	\
		ft_tolower.c 	\
		ft_strncmp.c 	\
		ft_strnstr.c 	\
		ft_atoi.c 		\
		ft_calloc.c 	\
		ft_strdup.c 	\
		ft_substr.c		\
		ft_strtrim.c 	\
		ft_putchar_fd.c \
		ft_putstr_fd.c  \
		ft_putendl_fd.c \
		ft_putnbr_fd.c 	\
		ft_strjoin.c 	\
		ft_striteri.c 	\
		ft_strmapi.c 	\
		ft_itoa.c 		\
		ft_split.c 		\

SRCS_BONUS = ft_lstnew_bonus.c 				\
				ft_lstadd_front_bonus.c 	\
				ft_lstsize_bonus.c 			\
				ft_lstlast_bonus.c 			\
				ft_lstadd_back_bonus.c		\
				ft_lstdelone_bonus.c 		\
				ft_lstclear_bonus.c 		\
				ft_lstiter_bonus.c 			\
				ft_lstmap_bonus.c 			\
				
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS_BONUS)

%.o : %.c
	gcc -c $(FLAGS) $< -o $@

.PHONY: clean fclean all bonus re

clean:
	@rm -f $(OBJS) $(OBJS_BONUS)

fclean:
	@rm -f $(OBJS) $(OBJS_BONUS) $(NAME)

re: fclean all