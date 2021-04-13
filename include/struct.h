/*
** EPITECH PROJECT, 2020
** graph
** File description:
** main
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/System.h>

typedef struct event
{
    sfEvent event;
    sfSound *sound;
    sfSoundBuffer *s_buf;
} event_t;

typedef struct text_but_menu
{
    sfText *play;
    sfText *option;
    sfText *tuto;
    sfText *quit;
    sfFont *font;
} text_but_menu_t;

typedef struct title
{
    sfText *title1;
    sfText *title2;
    sfFont *police;
    sfColor color_title;
} title_t;

typedef struct but_menu
{
    sfSprite *play;
    sfSprite *option;
    sfSprite *tuto;
    sfSprite *quit;
    sfTexture *but_i;
    sfTexture *but_c;
    int but_pressed;
} but_menu_t;

typedef struct menu
{
    sfSprite *background;
    sfTexture *t_background;
    but_menu_t *b_menu;
    text_but_menu_t *t_b_menu;
} menu_t;

typedef struct window
{
    sfRenderWindow *win;
    sfVideoMode video_mode;
    sfVector2u size_window;
    sfVector2i mouse_pos;
} window_t;

typedef struct game
{
    int scene;
    window_t *win;
    menu_t *menu;
    event_t *ev;
    title_t *title;
    int b;
} game_t;