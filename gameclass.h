#include <iostream>

using namespace std;


class Level
{
public:

    int level[20][25];
    int x,y;

    void load_level();
    void Screen_generator();

    void go_up();
    void go_down();
    void go_left();
    void go_right();
};
