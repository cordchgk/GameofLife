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

    //  printf("%lu\n", board.cells);
}


void change(struct board *board) {
    board->playing = board->playing * 2;
}

struct board initBoard(int dim) {
    struct board b;

    b.playing = 1;


    struct cell cells[dim][dim];

    cells[0][0] = cell_default;


    b.cells = (struct cell **) cells;

    struct cell c = initCell();

    cells[0][0] = c;
    printf("%i", cells[0][0].active);


    return b;


}


#endif //UNTITLED_BOARD_H
