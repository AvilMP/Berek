#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cstdlib>

#include "gameclass.h"


using namespace std;

void Level::load_level()
{
    fstream plik;
    plik.open("level01.txt",ios::in);
    string openlevel;
    while(getline(plik,openlevel))
    plik.close();

    string open_code[500];
    int intlevel[500];
    int n=0,m=0;

    for (int i=0; i<=500; i++)
    {
        open_code[n]=openlevel.substr(i,1);
        intlevel[i]=atoi(open_code[i].c_str());
        n++;
    }

    for (int i=0; i<20; i++)
    {
        for (int j=0; j<25; j++)
        {
            level[i][j]=intlevel[m];
            m++;
        }
    }
}
