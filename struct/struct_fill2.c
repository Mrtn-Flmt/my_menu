/*
** EPITECH PROJECT, 2021
** struct_menu.c
** File description:
** struct_menu
*/

#include "../include/my_menu.h"

text_but_menu_t *struct_fill_text_but_menu(void)
{
    text_but_menu_t *t_b_menu = malloc(sizeof(text_but_menu_t));
    t_b_menu->font = sfFont_createFromFile("font/space_age.ttf");
    t_b_menu->option = sfText_create();
    t_b_menu->play = sfText_create();
    t_b_menu->tuto = sfText_create();
    t_b_menu->quit = sfText_create();
    return (t_b_menu);
}

but_menu_t *struct_fill_but_menu(void)
{
    but_menu_t *b_menu = malloc(sizeof(but_menu_t));
    b_menu->option = sfSprite_create();
    b_menu->play = sfSprite_create();
    b_menu->tuto = sfSprite_create();
    b_menu->quit = sfSprite_create();
    b_menu->but_c = sfTexture_createFromFile("image/Play_BTN.png", NULL);
    b_menu->but_i = sfTexture_createFromFile("image/Close_BTN.png", NULL);
    return (b_menu);
}

title_t *struct_title (void)
{
    title_t *title = malloc(sizeof(title_t));
    title->title1 = sfText_create();
    title->title2 = sfText_create();
    title->police = sfFont_createFromFile("font/space_age.ttf");
    title->color_title = sfColor_fromRGB(205, 133, 63);
    return (title);
}