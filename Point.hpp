//
//  Point.hpp
//  Assignment 2 prototype
//
//  Created by jana hegazy on 09/03/2023.
//

#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>
#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;

class Point
{
    float x;
    float y;

public:
    Point();

    Point(float a, float b);

    void setX(float z);
    
    void setY(float t);
    
    float getX() const;

    float getY() const;

    void displayPoint() const;

    float findDistance(const Point &P) const;
};

#endif /* Point_hpp */
