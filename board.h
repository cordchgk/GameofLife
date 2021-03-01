//
// Created by cordch on 01.03.21.
//

#ifndef UNTITLED_BOARD_H

#include <malloc.h>
#include "cells.h"

#define UNTITLED_BOARD_H


struct board {
    int playing;
    struct cell **cells;


};


void display(struct board board) {

printf("%i", board.cells[0][0].active);
}


void change(struct board *board) {
    board->playing = board->playing * 2;
}

struct board initBoard(int w, int h) {
    struct board board;

    board.playing = 1;

    struct cell cells[h][w];
    board.cells = cells;

    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < h; ++j) {
            struct cell toAdd;
            toAdd.active = 1;

            board.cells[i][j] = toAdd;
        }


    }


    return board;


}


#endif //UNTITLED_BOARD_H
