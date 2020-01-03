#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <stdio.h>

#include "gameclass.h"

using namespace std;

void Level::Screen_generator()
{
    system("cls");x=0;y=0;
    for (int x=0;x<=19;x++)
    {
        for (int y=0;y<=24;y++)
        {
            if (level[x][y]==0) {cout<<"   ";}
            if (level[x][y]==1) {cout<<"[ ]";}
            if (level[x][y]==2) {cout<<"###";}
            if (level[x][y]==3) {cout<<"(_)";}
            if (y==24)          {cout<<endl;}
        }
     }
     cout<<endl;
}

void Level::go_up()
{
    for (int x=0;x<=19;x++)
    {
            for (int y=0;y<=24;y++)
            {
                if ((level[x][y]==1) && (level[x-1][y]!=2))
                {
                   level[x-1][y]=1;level[x][y]=0;
                }
            }
    }
}

void Level::go_down()
{
    for (int x=19;x>=0;x--)
    {
            for (int y=24;y>=0;y--)
            {
                if ((level[x][y]==1) && (level[x+1][y]!=2))
                {
                   level[x+1][y]=1;level[x][y]=0;
                }
            }
    }
}

void Level::go_left()
{
    for (int x=0;x<=19;x++)
    {
            for (int y=0;y<=24;y++)
            {
                if ((level[x][y]==1) && (level[x][y-1]!=2))
                {
                   level[x][y-1]=1;level[x][y]=0;
                }
            }
    }
}

void Level::go_right()
{
    for (int x=19;x>=0;x--)
    {
            for (int y=24;y>=0;y--)
            {
                if ((level[x][y]==1) && (level[x][y+1]!=2))
                {
                   level[x][y+1]=1;level[x][y]=0;
                }
            }
    }
}
