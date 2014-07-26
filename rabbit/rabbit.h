#ifndef RABBIT_H
#define RABBIT_H

#include <unordered_map>
#include "zoo.h"

class zoo::rabbit
{
private:

    struct image {
        zoo::key_square square;
        zoo::arrow arrow;
    };

    struct priority {
        int water;
        int grass;
    };

    std::unordered_map<image, priority> memory;

    zoo::key_square up();
    zoo::key_square down();
    zoo::key_square left();
    zoo::key_square right();

    void understand();

    unsigned int x, y;

    zoo::field location;

public:
    zoo::rabbit();
    ~rabbit();
//    void launcher(zoo::arrow command);
    void exec();
};

#endif // RABBIT_H
