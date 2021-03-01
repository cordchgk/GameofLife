#include <stdio.h>
#include <bits/types/clock_t.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include "board.h"


int main() {


    struct board board;

    board.playing = 13;


    display(board);


    change(&board);
    display(board);


    return 0;
}





