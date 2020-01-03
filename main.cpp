#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <stdio.h>
#include <conio.h>

#include "gameclass.h"

int wybor;

using namespace std;

int main()
{
    Level map_01; map_01.load_level();


    cout << "Great Escape by Scazza" << endl<<endl;
    cout << "Just run from bots :) "<<endl;
    for (;;)
    {
    wybor=getch();
    switch(wybor)
    {
        case 'w':   map_01.go_up();       break;

        case 's':   map_01.go_down();     break;

        case 'a':   map_01.go_left();     break;

        case 'd':   map_01.go_right();    break;
    }
    map_01.Screen_generator();
    }

    return 0;
}
