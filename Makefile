##
## EPITECH PROJECT, 2021
## B-CPE-100-STG-1-1-cpoolday10-thomas.decaudain
## File description:
## Makefile for ./do_op
##

SRC	=	./sources/*.c

OBJ	=	$(SRC:.c=.o)

NAME	=	102architect

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -s -C lib/my
	gcc -o $(NAME) $(SRC) -I./include/ -L./lib/my -lmy

clean:
	$(MAKE) -s -C lib/my clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -s -C lib/my fclean
	rm -f $(NAME)

re:	fclean all