//
//  Pancake.h
//  PancakeProject
//
//  Created by Juliang Li on 11/8/15.
//  Copyright (c) 2015 Juliang Li. All rights reserved.
//

#pragma once

#ifndef PancakeProject_Pancake_h
#define PancakeProject_Pancake_h
#include "Point.h"
#include "Graph.h"
#include <stdexcept>
#include <string>
#include <FL/Fl.H>
#undef vector
#include <vector>
// #include <FL/Fl_button.H>
using namespace Graph_lib;
class Pancake: public Ellipse{
private:
    static const int maxSize = 12;  // maximum pancake is 12
    static const int height = 15;
    static vector<int>widthArray; // different size has different width
    void setUpStyle();
public:
    Pancake(Point p, int size);
};

#endif
