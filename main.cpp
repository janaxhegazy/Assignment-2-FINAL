//
//  main.cpp
//  Assignment 2
//
//  Created by jana hegazy on 26/02/2023.
//

#include "cluster.h"
#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;
//global variables

const int m = 20;

const int n = 200;

void genA(Point *A, int n)
{
    srand(time(0));

    for (int i = 0; i < n; i++) {
        float x = rand() % 21 + 70;
        float y = rand() % 21 + 70;
        *(A+i) = Point(x, y);
    }
}

void genB(Point *B, int n)
{
    srand(time(0));

    for (int i = 0; i < n; i++) {
        float x = rand() % 21 + 20;
        float y = rand() % 21 + 20;
       *(B+i) = Point(x, y);
    }
}

void genP(Point *P, int m)
{
    srand(time(0));

    for (int i = 0; i < m; i++) {
        float x = rand() % 91 + 5;
        float y = rand() % 91 + 5;
        *(P+i) = Point(x, y);
    }
}


Point Center(Point *C, int n)
{
    float sumX = 0;
    float avgX = 0;
    
    float sumY =0;
    float avgY = 0;
    

    for (int i = 0; i < n; i++) {
        sumY += (C+i)->getY();
        // cout << sumY; // IGNORE: just to make sure i am on the right track.
        sumX += (C+i)->getX();
        // cout << sumX;
        
    }
    avgY = sumY / n;
    avgX = sumX / n;
   

    Point center(avgX, avgY);

    return center;
}

void clusterClose(Point *A, Point *B, const Point &P)
{
    Point centA = Center(A, n);
    Point centB = Center(B, n);

    float distPA = P.findDistance(centA);
    float distPB = P.findDistance(centB);

    if (distPA < distPB) {
        cout << "it shows that point P";P.displayPoint();cout<<" is closer to Cluster A" << endl;
    }
    else {
        cout << "it shows that point P";P.displayPoint();cout<<" is closer to Cluster B" << endl;
    }
}



int main()
{
    Point *A = new Point[n];
    Point *B = new Point[n];
    Point *P = new Point[m];

    genA(A, n);
    genB(B, n);
    genP(P, m);

    for (int i = 0; i < m; i++)
    {
        clusterClose(A, B, P[i]);
    }

}






