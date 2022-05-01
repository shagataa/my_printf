##
## EPITECH PROJECT, 2021
## B-PSU-100-PAR-1-1-myprintf-shagata.sri-chandan-das
## File description:
## Makefile
##

SRC	=	my_printf.c	\
		functions.c	\
		my_put_hex.c	\
		my_switchs.c     \

OBJS	=	$(SRC:.c=.o)

CPPFLAGS	 +=      -I./include

NAME	=	libmy.a

all:    $(NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)
		rm -f lib/my/*.o

fclean: clean
		rm -f $(NAME)
		rm -f lib/libmy.a
		rm -f lib/my/libmy.a

re:     fclean all

.PHONY: all
