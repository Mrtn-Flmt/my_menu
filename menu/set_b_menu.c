/*
** EPITECH PROJECT, 2020
** graph
** File description:
** main
*/

#include "./../include/my_menu.h"

void button_clicked(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    gm->win->mouse_pos.y >= 350 && gm->win->mouse_pos.y <= 450) {
        sfSprite_setTexture(gm->menu->b_menu->play, gm->menu->b_menu->but_c,
        sfTrue);
    }
    if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    gm->win->mouse_pos.y >= 470 && gm->win->mouse_pos.y <= 570) {
        sfSprite_setTexture(gm->menu->b_menu->tuto, gm->menu->b_menu->but_c,
        sfTrue);
    }
    if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    gm->win->mouse_pos.y >= 590 && gm->win->mouse_pos.y <= 690) {
        sfSprite_setTexture(gm->menu->b_menu->option, gm->menu->b_menu->but_c,
        sfTrue);
    }
    if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    gm->win->mouse_pos.y >= 710 && gm->win->mouse_pos.y <= 810) {
        sfSprite_setTexture(gm->menu->b_menu->quit, gm->menu->b_menu->but_c,
        sfTrue);
    }
}