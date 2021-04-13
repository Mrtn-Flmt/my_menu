##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Compilation Makefile
##

MY		=	src/

MENU 	=	menu/

STRUCT	=	struct/

SOUND	= 	sound/

EVENT	=	event/

SRC	=	./$(MY)main.c				\
		./$(MY)window.c				\
		./$(MY)init.c				\
		./$(MY)scene.c				\
									\
		./$(EVENT)event.c			\
									\
		./$(MENU)menu.c				\
		./$(MENU)set_menu.c			\
		./$(MENU)set_b_menu.c		\
		./$(MENU)set_t_b_menu.c		\
		./$(MENU)button.c			\
									\
		./$(STRUCT)struct_fill.c	\
		./$(STRUCT)struct_fill2.c	\
									\
		./$(SOUND)music.c			\


CFLAGS += -lcsfml-window -lcsfml-graphics -lcsfml-audio -lcsfml-system

NAME = 	my_rpg

$(NAME):
		 gcc $(CFLAGS) -o $(NAME) $(SRC)

all:	$(NAME)

clean:
		rm -f $(NAME)

fclean: clean
		rm -f $(NAME)

re:	fclean all