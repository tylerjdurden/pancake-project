//
//  Pancake.h
//  PancakeProject
//
//  Created by Juliang Li on 11/8/15.
//  Copyright (c) 2015 Juliang Li. All rights reserved.
//

#ifndef PancakeProject_Pancake_h
#define PancakeProject_Pancake_h
#include "Point.h"
#include "Graph.h"
#include <stdexcept>
#include <string>
#include <FL/Fl.H>
#undef vector
#include <vector>
#include <FL/Fl_button.H>
using namespace Graph_lib;
class Pancake: public Ellipse{
private:
    static const int maxSize = 12;  // maximum pancake is 12
    static const int height = 15;
    static vector<int>widthArray;   // different size has different width
    void setUpStyle(){
        // set up the style
        static const auto boundaryColor = fl_rgb_color(180, 83, 38);
        static const auto fillColor = fl_rgb_color(255, 242, 164);
        this->set_color(boundaryColor);
        this->set_style(Line_style(Line_style::solid, 5));
        this->set_fill_color(fillColor);
    }
public:
    Pancake(Point p, int size):
    Ellipse(p,widthArray[size],height){
        if (0 > size || size >= maxSize)
            throw std::runtime_error("Pancake size too big: " + std::to_string(size));
        setUpStyle();
    }

};
vector<int> Pancake::widthArray = vector<int>{30,60,90,120,150,180,210,240,270,300,330,360};

#endif
