// BeginnerExercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//Try to avoid using namespaces. Try the specific keyword, if you are going to be using a keyword often
using std::cout;
using std::cin;

#include "BeginnerFunctions.h"



int main()
{
    //std::cout << "Hello World!\n";
    ////Outputs 10, because it calculates 12 minus 2
    //std::cout << "Here is my number " << 12-2 << '\n';

    //cout << "Hello there\n";

    //cout << '\n' << '\n';
    //int i = 2 + 2;
    //cout << i << '\n';
    //i = i * 3;
    //cout << i << '\n';

    //int userInput;
    //std::cin >> userInput;
    //cout << "Here is your number: " << userInput << '\n' << '\n';


    /*int firstNumber;
    int secondNumber;
    bool keepGoing = true;
    int answer;
    while (keepGoing)
    {
        cout << "Please enter a number: ";
        cin >> firstNumber;
        cout << "You chose the number: " << firstNumber << "\nNow, please enter another number: ";
        cin >> secondNumber;

        if (firstNumber < secondNumber)
        {
            cout << "The first number, " << firstNumber << ", is less than the second number, " << secondNumber << '\n';
        }
        else
        {
            cout << "The first number, " << firstNumber << ", is not less than the second number, " << secondNumber << '\n';
        }
        if (firstNumber == secondNumber)
        {
            cout << "The first number, " << firstNumber << ", is equal to the second number, " << secondNumber << '\n';
        }
        if (firstNumber > secondNumber)
        {
            cout << "The first number, " << firstNumber << ", is greater than the second number, " << secondNumber << '\n';
        }

        for (int loop = 0; loop < 10; loop++)
        {
            cout << loop << " ";
        }

        cout << "Do you want to compare more numbers? Enter 0 for no, any other number for yes: ";
        cin >> answer;
        if (answer == 0)
        {
            keepGoing = false;
        }
    }*/

    //Guessing game that takes user input, and uses while loop to make user keep guessing, letting them know 
    //if their guess was too big or too small
    //int hiddenNumber = 12;
    //int guessedNumber;
    //bool keepGoing = true;

    //cout << "There is a number I am thinking of.\n";
    //while (keepGoing)
    //{
    //    cout << "What is my number? ";
    //    cin >> guessedNumber;

    //    if (guessedNumber > hiddenNumber)
    //    {
    //        cout << "Sorry, that number is too big. Try again. \n";
    //        //keepGoing = true;
    //    }
    //    else if (guessedNumber < hiddenNumber)
    //    {
    //        cout << "Sorry, that number is too small. Try again. \n";
    //        //keepGoing = true;
    //    }
    //    else if ( guessedNumber == hiddenNumber)
    //    {
    //        cout << "You guessed right! \n";
    //        keepGoing = false;
    //    }
    //}


    
    //Uses functions from BeginnerFunctions
    int total = add(3, 4);
    cout << "3 + 4 equals " << total << '\n';

    double another = add(1.2, 3.4);
    cout << '\n';
    cout << "1.2 + 3.4 equals " << another;
    cout << '\n';

    auto totalOfThree = add(1.1, 2.2, 3.3);
    cout << "1.1 + 2.2 + 3.3 equals " << totalOfThree;
    cout << '\n';

    add(0, 0, 0);

    if (test(true))
    {
        cout << "true passes the test" << '\n';
    }
    if (test(3.2))
    {
        cout << "3.2 passes the test" << '\n';
    }
    //compiler can't determine whether to use double or bool 
    /*if (test(3))
    {
        cout << "3 passes the test" << '\n';
    }*/

    return 0;

}