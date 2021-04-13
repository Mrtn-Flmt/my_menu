/*
** EPITECH PROJECT, 2021
** struct_fill.c
** File description:
** struct_fill
*/

#include "../include/my_menu.h"

menu_t *struct_fill_menu(void)
{
    menu_t *menu = malloc(sizeof(menu_t));
    menu->background = sfSprite_create();
    menu->t_background = sfTexture_createFromFile("image/bg.png", NULL);
    menu->b_menu = struct_fill_but_menu();
    menu->t_b_menu = struct_fill_text_but_menu();
    return (menu);
}

window_t *struct_fill_window(void)
{
    window_t *win = malloc(sizeof(window_t));
    win->video_mode.width = 1920;
    win->video_mode.height = 1080;
    win->video_mode.bitsPerPixel = 32;
    return (win);
}

game_t *struct_fill_game(void)
{
    game_t *gm = malloc(sizeof(game_t));
    gm->win = struct_fill_window();
    gm->menu = struct_fill_menu();
    gm->ev = malloc(sizeof(event_t));
    gm->title = struct_title();
    return (gm);
}