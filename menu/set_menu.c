/*
** EPITECH PROJECT, 2020
** graph
** File description:
** main
*/

#include "./../include/my_menu.h"

void set_menu(game_t *gm)
{

    sfSprite_setTexture(gm->menu->b_menu->play, gm->menu->b_menu->but_i,
    sfTrue);
    sfSprite_setTexture(gm->menu->b_menu->option, gm->menu->b_menu->but_i,
    sfTrue);
    sfSprite_setTexture(gm->menu->b_menu->tuto, gm->menu->b_menu->but_i,
    sfTrue);
    sfSprite_setTexture(gm->menu->b_menu->quit, gm->menu->b_menu->but_i,
    sfTrue);
    sfText_setOutlineThickness(gm->title->title1, 3.0);
    sfText_setOutlineThickness(gm->title->title2, 3.0);
    sfText_setColor(gm->title->title1, gm->title->color_title);
    sfText_setColor(gm->title->title2, gm->title->color_title);
}

void init_menu(game_t *gm)
{
    gm->scene = 0;
    sfSprite_setTexture(gm->menu->background, gm->menu->t_background, sfTrue);
    sfSprite_setScale(gm->menu->b_menu->play, (sfVector2f){0.5, 0.5});
    sfSprite_setScale(gm->menu->b_menu->option, (sfVector2f){0.5, 0.5});
    sfSprite_setScale(gm->menu->b_menu->tuto, (sfVector2f){0.5, 0.5});
    sfSprite_setScale(gm->menu->b_menu->quit, (sfVector2f){0.5, 0.5});
    sfSprite_setPosition(gm->menu->b_menu->play, (sfVector2f){350, 300});
    sfSprite_setPosition(gm->menu->b_menu->tuto, (sfVector2f){350, 500});
    sfSprite_setPosition(gm->menu->b_menu->option, (sfVector2f){350, 700});
    sfSprite_setPosition(gm->menu->b_menu->quit, (sfVector2f){350, 900});
}