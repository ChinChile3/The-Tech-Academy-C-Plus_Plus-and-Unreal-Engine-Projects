// StringExercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int main()
{
    /*string name;
    cout << "Who are you? ";
    cin >> name;
    string greeting = "Hello, " + name;
    if (name == "Anthony" || name == "Taylor")
    {
        greeting += ", I know you!";
    }
    cout << greeting << '\n';

    int len = greeting.length();
    cout << "\"" + greeting + "\" is " << len << " characters long!" << '\n';
    string beginning = greeting.substr(greeting.find(' ') + 1);
    cout << beginning << '\n';
    if (beginning == name)
    {
        cout << "expected result." << '\n';
    }

    return 0;*/

    string firstString;
    string secondString;

    /*cout << "Hello there! Please type any word. ";
    cin >> firstWord;*/
    //Below, allows input to take in entire line, including spaces, instead of just one string
    cout << "Hello there! Please type any word or phrase. ";
    getline(cin, firstString);


    /*cout << "Now, please enter another word. ";
    cin >> secondWord;*/
    //Below, allows input to take in entire line, including spaces, instead of just one string
    cout << "Now, please enter another word or phrase. ";
    getline(cin, secondString);

    
    if (firstString.length() > secondString.length())
    {
        cout << "\"" + firstString + "\" has more characters than " + "\"" + secondString + "\"" << '\n';
    }
    else if (firstString.length() < secondString.length())
    {
        cout << "\"" + firstString + "\" has less characters than " + "\"" + secondString + "\"" << '\n';
    }
    else if (firstString.length() == secondString.length())
    {
        cout << "\"" + firstString + "\" has the same amount of characters as " + "\"" + secondString + "\"" << '\n';
    }


    return 0;
}
