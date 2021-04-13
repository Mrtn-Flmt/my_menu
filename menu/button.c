/*
** EPITECH PROJECT, 2021
** menu.c
** File description:
** menu
*/

#include "./../include/my_menu.h"

void button_hover(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    gm->win->mouse_pos.y >= 350 && gm->win->mouse_pos.y <= 450)
        sfText_setColor(gm->menu->t_b_menu->play, sfBlack);
    else
        sfText_setColor(gm->menu->t_b_menu->play, sfWhite);
    if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    gm->win->mouse_pos.y >= 470 && gm->win->mouse_pos.y <= 570)
        sfText_setColor(gm->menu->t_b_menu->tuto, sfBlack);
    else
        sfText_setColor(gm->menu->t_b_menu->tuto, sfWhite);
    if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    gm->win->mouse_pos.y >= 590 && gm->win->mouse_pos.y <= 690)
        sfText_setColor(gm->menu->t_b_menu->option, sfBlack);
    else
        sfText_setColor(gm->menu->t_b_menu->option, sfWhite);
    if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    gm->win->mouse_pos.y >= 710 && gm->win->mouse_pos.y <= 810)
        sfText_setColor(gm->menu->t_b_menu->quit, sfBlack);
    else
        sfText_setColor(gm->menu->t_b_menu->quit, sfWhite);
}