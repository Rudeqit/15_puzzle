#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <ncurses.h>

void control_window(WINDOW* stdscr);

WINDOW *board(WINDOW* stdscr);

void victory_window(WINDOW* stdscr);

void draw_board(WINDOW* board_window, int* arr);

#endif
