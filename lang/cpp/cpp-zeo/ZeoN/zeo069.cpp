#include<iostream>
using namespace std;

enum Color
{

    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    COLOR_WHITE,
    COLOR_CYAN,
    COLOR_YELLOW,
    COLOR_MAGENTA, 
}; 

Color paint = COLOR_WHITE;
Color house(COLOR_BLUE);
Color apple { COLOR_RED };

int hello = 5;
int hey(COLOR_BLUE);
int home {5};

int main()
{
    int nien {100};
    cout<<paint;
    cout<<house;
    cout<<apple;
    cout<<home;
    cout<<nien;
}