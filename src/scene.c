/*
** EPITECH PROJECT, 2021
** scene.c
** File description:
** scene
*/

#include "../include/my_menu.h"

void scene(game_t *gm)
{
    gm->win->mouse_pos.x = sfMouse_getPositionRenderWindow(gm->win->win).x;
    gm->win->mouse_pos.y = sfMouse_getPositionRenderWindow(gm->win->win).y;
    if (gm->scene == 0)
        menu(gm);
    // gm->tuto->pos_mouse_f.x = gm->win->mouse_pos.x * 1.0;
    // gm->tuto->pos_mouse_f.y = gm->win->mouse_pos.y * 1.0;
    // sfSprite_setPosition(gm->tuto->mouse, gm->tuto->pos_mouse_f);
    // sfRenderWindow_drawSprite(gm->win->win, gm->tuto->mouse, NULL);
}