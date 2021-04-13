/*
** EPITECH PROJECT, 2020
** graph
** File description:
** main
*/

#include "include.h"
#include "struct.h"

int initialisation(game_t *game);
void set_window(game_t *gm);
window_t *struct_fill_window(void);
menu_t *struct_fill_menu(void);
text_but_menu_t *struct_fill_text_but_menu(void);
but_menu_t *struct_fill_but_menu(void);
title_t *struct_title (void);
game_t *struct_fill_game(void);
void pollevent_menu(game_t *gm);
void scene(game_t *gm);
void button_clicked(game_t *gm);
void button_hover(game_t *gm);
void pollevent_menu(game_t *gm);

void menu(game_t *gm);
void init_menu(game_t *gm);
void text_menu(game_t *gm);
void set_menu(game_t *gm);