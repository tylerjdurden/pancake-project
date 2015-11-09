#include "Game_window.h"

Game_window::Game_window(Point xy, int w, int h, const string& title)
    :Window(xy,w,h,title),
    logo(Point(0,0), "ihop.jpg", Suffix::jpg)
{
    this->attach(logo);
    for (auto text : texts)
    {
        this->attach(*text);
    }
}
