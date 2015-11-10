#include "Pancake.h"

void Pancake::setUpStyle()
{
    // set up the style
    static const auto boundaryColor = fl_rgb_color(180, 83, 38);
    static const auto fillColor = fl_rgb_color(255, 242, 164);
    this->set_color(boundaryColor);
    this->set_style(Line_style(Line_style::solid, 5));
    this->set_fill_color(fillColor);
}

Pancake::Pancake(Point p, int size):
    Ellipse(p,widthArray[size],height){
        if (0 > size || size >= maxSize)
            throw std::runtime_error("Pancake size too big: " + std::to_string(size));
        setUpStyle();
    }


vector<int> Pancake::widthArray = vector<int>{30,60,90,120,150,180,210,240,270,300,330,360};
