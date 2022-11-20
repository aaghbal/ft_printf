# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaghbal <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 18:25:33 by aaghbal           #+#    #+#              #
#    Updated: 2022/11/15 18:26:49 by aaghbal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS =  -Wall -Wextra -Wextra
MAND_SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c \
			ft_putnbr_u.c fct.c fct2.c  

MAND_OBJ = $(MAND_SRC:.c=.o)
RM = rm -f
NAME = libftprintf.a
HEADER = ft_printf.h

all : $(NAME)

$(NAME) : $(MAND_OBJ)
		ar -rc $@ $(MAND_OBJ)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $<

clean :
	 $(RM) $(MAND_OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all 

.PHONY : fclean clean all re
      