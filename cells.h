//
// Created by cordch on 01.03.21.
//

#ifndef UNTITLED_CELLS_H
#define UNTITLED_CELLS_H


 struct cell {

     int active;


 } cell_default = {3};


struct cell initCell() {
    struct cell c;
    c.active = 3;

    return c;

}


void setNB(struct cell *c) {


}

#endif //UNTITLED_CELLS_H
