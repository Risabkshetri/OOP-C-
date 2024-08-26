// program1. A point on the two dimensional plane can be regresendted by two numbers: an X coordinate and a Y coordinate. For example, (4,5) is a pont 4 units to the right of the origin along the x-axis and 5 units up the origin along the y-axis. The sum of two points can be defined as a new point whose X coordinate is the sum of the X coordinates  and whose Y coordinate is the sum of the Y coordinates. Wtite a program that uses a structure called point to model a point. Define three points, and have the user input values to two of them. Then set the third point equal to the sum of the other two, display the value of the new point. INteraction with the porgram might look like this: 
// Eneter coordinates for p1: 3  4
// Eneter coordinates for p2: 5  7
// Coordinates of p1 + p2 = 8  11

#include <iostream>
using namespace std;

int main(){
    struct point{
        int x;
        int y;
    };
    point p1, p2, p3;
    cout << "Enter coordinates for p1 :" << endl;
    cin >>  p1.x >> p1.y; 
    cout << "Enter coordinates for p2 :" << endl;
    cin >>  p2.x >> p2.y; 
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;
    cout << "Coordinate of p1 + p2 : " << "(" << p3.x << ", " << p3.y << ")";
}

