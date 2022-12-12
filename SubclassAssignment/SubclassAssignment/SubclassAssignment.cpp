// SubclassAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    string color;

    double getArea(double height, double width)
    {
        return height * width;
    }
    double getArea(double base, double height)
    {
        return 0.5 * base * height;
    }
    double getArea(double radius)
    {
        return 3.14 * radius;
    }
};

class Rectangle : public Shape
{
public:
    double height;
    double width;
};
class Triangle : public Shape
{
public:
    double base;
    double height;
};
class Circle : public Shape
{
public:
    double radius;
};


int main()
{
    
}
