# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: douaeoxo <douaeoxo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/14 15:48:53 by doabrour          #+#    #+#              #
#    Updated: 2025/11/15 14:40:49 by douaeoxo         ###   ########.fr        #
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

NAME := ft_printf.a

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

%.o : %.c ft_printf.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBG)

fclean :clean
	@rm -f $(NAME)

re:
	clean all

.PHONY: clean