#include "Game_window.h"

Game_window::Game_window(Point xy, int w, int h, const string& title)
    :Window(xy,w,h,title),
    logo(Point(0,0), "ihop.jpg", Suffix::jpg),
    splash_next(Point(x_max()-70,y_max()-20),70,20,"Next",cb) 
{
    this->attach(splash_next);
    this->attach(logo);
    for (auto text : texts)
    {
        this->attach(*text);
    }
}

void Game_window::cb(Address, Address data)
{
    static_cast<Game_window*>(data)->next();
}

void Game_window::next()
{
    this->detach(splash_next);
    this->detach(logo);
    for (auto text : texts)
    {
        this->detach(*text);
    }

    this->redraw();
}
