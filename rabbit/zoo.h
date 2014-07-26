#ifndef ZOO_H
#define ZOO_H

namespace zoo {

enum arrow {
    UP, LEFT, DOWN, RIGHT
};

enum cell_type {
    GRASS, WATER, EMPTY
};

class field;
class cell;

typedef int key_square;

class rabbit;
}

#endif // ZOO_H
