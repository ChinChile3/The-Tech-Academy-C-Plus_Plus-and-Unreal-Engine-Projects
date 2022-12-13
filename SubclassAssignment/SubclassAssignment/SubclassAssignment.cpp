// SubclassAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    string color;

    double getArea()
    {

    }
    
    
};

class Rectangle : public Shape
{
public:
    double height;
    double width;

    double getArea(double height, double width)
    {
        return height * width;
    }
};
class Triangle : public Shape
{
public:
    double base;
    double height;

    double getArea(double base, double height)
    {
        return 0.5 * base * height;
    }
};
class Circle : public Shape
{
public:
    double radius;

    double getArea(double radius)
    {
        return 3.14 * radius;
    }
};


int main()
{
    
}
