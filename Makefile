NAME		= libftprintf.a

SRC		= \
		ft_format.c ft_print_hex.c ft_print_ptr.c \
		ft_printf.c ft_putnbr.c ft_nbrlen.c \
		ft_print_nbr.c ft_print_str.c ft_putchar.c ft_strlen.c \
		ft_print_char.c ft_print_percent.c ft_print_unsigned.c \
		ft_putchar_fd.c

SRCS		= ${addprefix ${PRE}, ${SRC}}

OBJS		= ${SRCS:.c=.o}

PRE			= ./srcs/
HEAD			= ./includes/

AR			= ar rc
RM			= rm -f
LIB			= ranlib

CC		= cc
CFLAGS		= -Wall -Wextra -Werror

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}
	${LIB} ${NAME}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re: fclean all

.PHONY:	all clean fclean re
