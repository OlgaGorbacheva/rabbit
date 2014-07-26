#ifndef FIELD_H
#define FIELD_H

#include "zoo.h"

#include <vector>

struct zoo::cell
{
    bool color; //0-белый; 1-черный
    zoo::cell_type type;
};

class zoo::field
{
private:
    unsigned int n, m;
    std::vector<std::vector> matrix;
public:
    zoo::field();
    ~field();

    zoo::key_square get_key(int x, int y);
    unsigned int get_x_sz();
    unsigned int get_y_sz();
    void set_x_sz(unsigned int _n);
    void set_y_sz(unsigned int _m);
};

#endif // FIELD_H
