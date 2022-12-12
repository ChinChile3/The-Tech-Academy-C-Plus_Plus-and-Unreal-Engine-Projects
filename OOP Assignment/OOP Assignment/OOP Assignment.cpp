// OOP Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
    string Breed;
    string Color;
    int Height;
    int Weight;

    void Shake()
    {
        cout << Breed << " shakes paw with its owner." << '\n';
    }
    
    void Sit()
    {
        cout << Breed << " sits down on command." << '\n';
    }
    void LayDown()
    {
        cout << Breed << " lays down upon command." << '\n';
    }

};



int main()
{
    Dog dog1;
    dog1.Breed = "German Shepard";
    dog1.Color = "Brown";
    dog1.Height = 3;
    dog1.Weight = 105;

    dog1.LayDown();
    dog1.Shake();
    dog1.Sit();

    return 0;
}
