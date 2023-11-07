NAME = libftprintf.a

SRCS = ft_printf.c	\
		ft_chr.c 	\
		ft_dnbr.c 	\
		ft_format.c \
		ft_str.c 	\
		ft_unbr.c 	\
		ft_xnbr.c 	\
		ft_xxnbr.c 	\
		ft_putnbr.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_p.c 		\

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	gcc -c $(FLAGS) $< -o $@

.PHONY: clean fclean all bonus re

clean:
	@rm -f $(OBJS)

fclean:
	@rm -f $(OBJS) $(NAME)

re: fclean all