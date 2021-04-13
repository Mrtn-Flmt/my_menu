/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_menu.h"

void event_gestion_menu(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    gm->win->mouse_pos.y >= 350 && gm->win->mouse_pos.y <= 450)
        gm->scene = 1;
    if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    gm->win->mouse_pos.y >= 470 && gm->win->mouse_pos.y <= 570)
        gm->scene = 2;
    if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    gm->win->mouse_pos.y >= 590 && gm->win->mouse_pos.y <= 690)
        gm->scene = 3;
    if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    gm->win->mouse_pos.y >= 710 && gm->win->mouse_pos.y <= 810) {
        sfRenderWindow_close(gm->win->win);
    }
}

void sleep_menu(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    gm->win->mouse_pos.y >= 350 && gm->win->mouse_pos.y <= 450)
        sfSleep(sfSeconds(0.35));
    if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    gm->win->mouse_pos.y >= 470 && gm->win->mouse_pos.y <= 570)
        sfSleep(sfSeconds(0.35));
    if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    gm->win->mouse_pos.y >= 590 && gm->win->mouse_pos.y <= 690)
        sfSleep(sfSeconds(0.35));
    if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    gm->win->mouse_pos.y >= 710 && gm->win->mouse_pos.y <= 810) {
        sfSleep(sfSeconds(0.35));
    }
}

void pollevent_menu(game_t *gm)
{
    while (sfRenderWindow_pollEvent(gm->win->win, &gm->ev->event)) {
        if (gm->ev->event.type == sfEvtClosed)
            sfRenderWindow_close(gm->win->win);
        button_hover(gm);
        if (gm->ev->event.type == sfEvtMouseButtonPressed &&
        gm->ev->event.mouseButton.button == sfMouseLeft) {
            gm->menu->b_menu->but_pressed = 1;
            sfText_setColor(gm->menu->t_b_menu->play, sfWhite);
            sfText_setColor(gm->menu->t_b_menu->option, sfWhite);
            sfText_setColor(gm->menu->t_b_menu->tuto, sfWhite);
            sfText_setColor(gm->menu->t_b_menu->quit, sfWhite);
        }
        if (gm->ev->event.type == sfEvtMouseButtonReleased &&
        gm->ev->event.mouseButton.button == sfMouseLeft) {
            gm->menu->b_menu->but_pressed = 0;
            sleep_menu(gm);
            event_gestion_menu(gm);
        }
    }
}