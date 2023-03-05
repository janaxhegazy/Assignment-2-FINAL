//
//  cluster.h
//  Assignment 2
//
//  Created by jana hegazy on 26/02/2023.
//


#ifndef cluster_h
#define cluster_h

#include <cmath>
#include <iostream>
using namespace std;

class Point {
    float x;
    float y;

public:
    Point()
    {
        x = 0;
        y = 0;
    }

    Point(float a, float b)
    {
        x = a;
        y = b;
    }

    void setX(float z)
    {
        x = z;
    }
    
    void setY(float t)
    {
        y = t;
    }
    
    float getX() const
    {
        return x;
    }

    float getY() const
    {
        return y;
    }

    void displayPoint() const
    {
        cout << "{" << x << "," << y << "}";
    }

    float findDistance(const Point &P) const
    {
        float distance = sqrt(pow(x - P.getX(), 2) + pow(y - P.getY(), 2));
        return distance;
    }
};

#endif /* cluster_h */
