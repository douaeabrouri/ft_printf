# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/14 15:48:53 by doabrour          #+#    #+#              #
#    Updated: 2025/11/17 14:42:13 by doabrour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME := libftprintf.a

src := 	ft_printf.c print_character.c  print_decimal.c print_integer.c print_lower_hexadecimal.c \
		print_upper_hexadecimal.c print_pointer.c print_string.c print_unsigned.c

CC := cc
CFLAGS := -Wall -Wextra -Werror
LIB := ar rcs
OBG := $(src:.c=.o)

all : $(NAME)

$(NAME): $(OBG)
	@$(LIB) $(NAME) $?

test: main.c
	@$(CC) $(CFLAGS) main.c $(NAME) -o test 

%: %.o main.c 
	@$(CC) $(CFLAGS) $^ -o $@

%.o : %.c ft_printf.h
	@$(CC) $(CFLAGS) -c $< -o $@

main.c:
	@echo "int main() {return 0;}" > $@

clean:
	@rm -f $(OBG)

fclean :clean
	@rm -f $(NAME)

tclean: fclean
	@rm -f test main.c 

re:
	clean all

.PHONY: clean re all fclean tclean