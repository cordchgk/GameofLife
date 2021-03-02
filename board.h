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


}


struct board initBoard(int dim) {
    struct board b;

    b.playing = 1;


    struct cell cells[dim][dim];
printf("Hello World");

    b.cells = (struct cell **) cells;

    struct cell c = initCell();

    cells[0][0] = c;
    printf("%i\n", cells[0][0].active);
    printf("Hello World");

    return b;


}


#endif //UNTITLED_BOARD_H
