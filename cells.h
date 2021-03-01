//
// Created by cordch on 01.03.21.
//

#ifndef UNTITLED_CELLS_H
#define UNTITLED_CELLS_H


struct cell {
    int id;
    int active;

    struct cell *nb[];
};


void setNB(struct cell *c) {


}

#endif //UNTITLED_CELLS_H
