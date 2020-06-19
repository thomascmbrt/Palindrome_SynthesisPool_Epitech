##
## EPITECH PROJECT, 2019
## SYN_palindrome_2019
## File description:
## Makefile
##

SRC_LIB	=	src/lib/my_putstr.c		\
			src/lib/my_put_nbr.c	\
			src/lib/my_putchar.c	\
			src/lib/my_getnbr.c		\
			src/lib/my_revstr.c		\
			src/lib/my_strcpy.c		\
			src/lib/my_strlen.c		\
			src/lib/my_strcmp.c		\
			src/lib/my_rev_int.c	\

SRC_PROJECT	=	src/usage.c 			\
				src/op.c 				\
				src/manage_error.c 		\
				src/parsing.c 			\
				src/init_struct.c 		\
				src/cases.c 			\
				src/check_palindrome.c 	\
				src/calcul.c 			\
				src/print_info.c 		\
				src/free.c				\

SRC =	src/main.c 		\
		$(SRC_LIB) 		\
		$(SRC_PROJECT) 	\

OBJ =	$(SRC:.c=.o)

NAME =	palindrome

CFLAGS	= -W -Wall -Wextra -I./include

GFLAGS	= -g3

all: $(NAME)

$(NAME):	build

%.o: %.c ## Compile the objects
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "[\e[1;33mCompilation\e[0m] % 41s \e[1;32m[✓]\e[0m\n" $@ | tr ' ' '.'

build: $(OBJ) ## Build the binary
	@printf "\e[1;32mFinished compiling sources\e[0m\n"
	@$(CC) $(OBJ) -o $(NAME)
	@printf "\e[1;32mLinked all object files\e[0m\n"

clean: ## Clean objects
	@rm -f $(OBJ)
	@printf "\e[1;32mFinished removing objects\e[0m\n"

fclean:	clean ## Force clean obj + binary
	@rm -f $(NAME)
	@printf "\e[1;32mFinished removing linked binaries\e[0m\n"

debug:	 CFLAGS += -g3
debug:	re

re: fclean all
