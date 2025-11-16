# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: doabrour <doabrour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/14 15:48:53 by doabrour          #+#    #+#              #
#    Updated: 2025/11/16 19:19:54 by doabrour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED     := \033[1;31m
YELLOW  := \033[1;33m
GREEN   := \033[1;32m
CYAN    := \033[1;36m
BLUE    := \033[1;34m
MAGENTA := \033[1;35m
RESET   := \033[0m

define RAINBOW
$(RED)$(1)$(YELLOW)$(2)$(GREEN)$(3)$(CYAN)$(4)$(BLUE)$(5)$(MAGENTA)$(6)$(RESET)
endef

NAME := libftprintf.a

src := 	ft_printf.c print_character.c  print_decimal.c print_integer.c print_lower_hexadecimal.c \
		print_upper_hexadecimal.c print_pointer.c print_string.c print_unsigned.c

CC := cc
CFLAGS := -Wall -Wextra -Werror
LIB := ar rcs
OBG := $(src:.c=.o)

all : $(NAME)
	 @echo "$(call RAINBOW,everything ,is ,reday ,bro... ,ft_printf)"

$(NAME): $(OBG)
	@$(LIB) $(NAME) $?

test: main.c
	@cc $(CFLAGS) main.c $(NAME) -o test 

%: %.o main.c 
	@cc $(CFLAGS) $^ -o $@

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

.PHONY: clean