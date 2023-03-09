//
//  Point.cpp
//  Assignment 2 prototype
//
//  Created by jana hegazy on 09/03/2023.
//

#include "Point.hpp"


Point:: Point()
{
    x = 0;
    y = 0;
}

Point::  Point(float a, float b)
{
    x = a;
    y = b;
}

void Point:: setX(float z)
{
    x = z;
}

void Point:: setY(float t)
{
    y = t;
}

float Point:: getX() const
{
    return x;
}

float Point:: getY() const
{
    return y;
}

void Point:: displayPoint() const
{
    cout << "{" << x << "," << y << "}";
}

float Point:: findDistance(const Point &P) const
{
    float distance = sqrt(pow(x - P.getX(), 2) + pow(y - P.getY(), 2));
    return distance;
}
