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
    printf("%i\n", board.playing);


}


void change(struct board *board) {
    board->playing = board->playing * 2;
}

struct board initBoard(int w, int h) {
    struct board board;

    board.playing = 1;
    board.cells = malloc(w * sizeof(struct cell));

    for (int i = 0; i < h;i++) {
        board.cells[i] = malloc(h * sizeof(struct cell));


    }


    return board;


}


#endif //UNTITLED_BOARD_H
