// Challenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


//Used for Main() Function Challenge
void simpleFunction()
{
    cout << "Here is my basic function" << '\n';
}
//Used for Function Challenge
int numFunction(int x , int y)
{
    return x * y;
}
double numFunction(double x, double y)
{
    return x * y;
}
void defaultFunc(string name = "Anthony")
{
    cout << name << '\n';
}
void referFunction(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

//Used for Class Challenge and Class Methods Challenge
class newClass
{
public:
    int classNum;
    string className;

    void classMethod2();

    void classMethod()
    {
        cout << "Hello " << className << '\n';
    }
};
void newClass::classMethod2()
{
    cout << "Hello " << className << '\n';
}

//Used for Constructor Method Challenge
class student
{
public:
    int age;
    string name;
    student(int x, string y);
private:
    double gradePercent;
protected:
    int studentID;

    
};
student::student(int x, string y)
{
    age = x;
    name = y;
}

//Used for Inheritance Challenge
class food
{
public:
    string name;
    int quantity;

    void growFood()
    {
        cout << "This type of food shall grow" << '\n';
    }
};
class fruit : public food
{
protected:
    int seedCount;
public:
    void growFood()
    {
        cout << "Fruits are growing" << '\n';
    }

};
class berry : public fruit
{

};
class vegetable : public food
{
public:
    void growFood()
    {
        cout << "Vegetables are growing" << '\n';
    }
};
class tomato : public fruit, public vegetable
{
    void getSeedCount()
    {
        seedCount;
    }
};



int main()
{
    //Hello World Challenge
    std::cout << "Hello World!\n";

    //Output Challenge/New Line challenge
    int thisNum = 28;
    cout << "I am " << thisNum << " years old." << '\n' << "My birthday was in November." << '\n';

    //Variables Challenge
    char firstChar = 'A';
    int favNum = 12;
    double decimalNum = 4.7;
    bool theTruth = true;
    string firstName = "Anthony";
    string lastName = "Velarde";
    cout << "My name is " << firstName + ' ' + lastName << '\n';
    string middleName1 = "Frank", middleName2 = "Jose";

    //Const Challenge
    const int nvrChangeNum = 45;
    /*nvrChangeNum += 2;
    cout << nvrChangeNum;*/

    //User Input Challenge
    /*cout << "Hello there! what is your favorite fruit?" << '\n';
    string favFruit;
    cin >> favFruit;
    cout << favFruit << " is a good choice!" << '\n';*/

    //Float Challenge
    float thisFloat = 33.6;
    cout << thisFloat << '\n';

    //String Challenge
    string firstPhrase = "Life is like a box of chocolates: ";
    string secondPhrase = "you never know what you are going to get.";
    string wholePhrase = firstPhrase + secondPhrase;
    cout << wholePhrase << '\n';
    //String Functions Challenge
    cout << firstPhrase.length() << '\n';
    cout << secondPhrase[2] << '\n';
    firstPhrase[2] = 'k';
    cout << firstPhrase << '\n';

    //Operators Challenge
    int quarter = 25;
    int half = 50;
    int threeQuarters = 75;
    int whole = 100;

    cout << quarter << " plus " << threeQuarters << " equals " << quarter + threeQuarters << '\n';
    cout << half << " minus " << threeQuarters << " equals " << half - threeQuarters << '\n';
    cout << whole << " times " << quarter << " equals " << whole * quarter << '\n';
    cout << whole << " divided by " << quarter << " equals " << whole / quarter << '\n';
    //the second time whole is called is the new whole that was previously incremented
    cout << whole++ << " incremented by 1 is " << whole << '\n';

    //Comparison Operators Challenge
    //int userNumber;
    //int userNumber2;
    //cout << "Please enter a number: " << '\n';
    //cin >> userNumber;
    //cout << "Now, enter another number: " << '\n';
    //cin >> userNumber2;
    //if (userNumber > userNumber2)
    //{
    //    cout << userNumber << " is greater than " << userNumber2 << '\n';
    //}
    //if (userNumber == userNumber2)
    //{
    //    cout << userNumber << " is equal to " << userNumber2 << '\n';
    //}
    //if (userNumber != userNumber2)
    //{
    //    cout << userNumber << " is not equal to " << userNumber2 << '\n';
    //}
    //if (userNumber <= userNumber2)
    //{
    //    cout << userNumber << " is less than or equal to " << userNumber2 << '\n';
    //}

    //Assignment Operator Challenge
    int beginningNum = 5;
    cout << beginningNum << '\n';
    beginningNum += 15;
    cout << beginningNum << '\n';
    beginningNum <<= 2;
    cout << beginningNum << '\n';
    beginningNum &= 8;
    cout << beginningNum << '\n' << '\n';

    //Logical Operators Challenge
    int logicalNumOne = 12;
    int logicalNumTwo = 23;
    int logicalNumThree = 7;
    cout << (logicalNumOne > logicalNumThree && logicalNumOne < logicalNumTwo) << '\n';
    cout << (logicalNumOne < logicalNumThree || logicalNumTwo < logicalNumThree) << '\n';
    cout << (logicalNumTwo != logicalNumThree) << '\n' << '\n';

    //Multi Line Code Comments Challenge
    /*Here are some comments
    that go over multiple
    lines. */

    //Getline Function Challenge
    //string fullName;
    //cout << "Please enter your first and last name: " << '\n';
    //getline(cin, fullName);
    //cout << fullName << " is the name that you have given." << '\n';

    //Math Functions Challenge
    cout << max(12, 35) << '\n';
    cout << sqrt(144) << "\n";
    cout << round(47.2) << "\n";
    cout << pow(5, 2) << '\n' << '\n';

    //Conditional Statements Challenge
    int x = 12;
    int y = 8;
    int z = 22;
    if (x > y)
    {
        cout << x << " is greater than " << y << '\n';
    }

    if (x > z)
    {
        cout << x << " is greater than " << z << '\n';
    }
    else if (x < z)
    {
        cout << x << " is less than " << z << '\n';
    }

    if (y > x)
    {
        cout << y << " is greater than " << x << '\n';
    }
    else
    {
        cout << y << " is less than " << x << '\n' << '\n';
    }

    switch (z) {
    case 12: 
        cout << x << '\n';
        break;
    case 8:
        cout << y << '\n';
        break;
    case 22:
        cout << z << '\n';
    }

    string comparison = (y > z) ? "8 is greater than 22" : "8 is less than 22";
    cout << comparison << '\n' << '\n';

    //While Loop and Do/While Challenge
    int whileNum = 5;
    while (whileNum < 10)
    {
        cout << whileNum << " is less than 10" << '\n';
        whileNum++;
    }

    do
    {
        cout << whileNum << " is greater than 0" << '\n' << '\n';
        whileNum--;
    } while (whileNum > 0);

    //For Loop Challenge
    for (int i = 5; i > 0; i--)
    {
        cout << i << " is greater than 0" << '\n' << '\n';
    }

    //Break and Continue Challenge
    int xyz = 10;
    while (xyz > 0)
    {
        if (xyz == 5)
        {
            xyz--;
            continue;
        }
        if (xyz == 2) 
        {
            break;
        }
        cout << xyz << " is greater than 0" << '\n';
        xyz--;
    }

    //Array Challenge
    int myNums[5] = { 6, 12, 3, 5, 66 };
    cout << myNums[3] << '\n' << '\n';

    //Array Loop Challenge
    for (int i = 0; i < 5; i++)
    {
        cout << myNums[i] << '\n';
    }

    //Reference Variable Challenge
    string myCar = "Alero";
    string &vehicle = myCar;
    cout << vehicle << '\n';
    //& Operator Challenge
    cout << &myCar << '\n';
    //Pointer Challenge: displays memory address of variable
    string* ptr = &myCar;
    cout << &myCar << '\n' << ptr << '\n';
    //Dereference Operator Challenge: displays value of variable
    cout << *ptr << '\n' << '\n';

    //Main() Function Challenge
    simpleFunction();

    //Function Challenge
    defaultFunc();
    int funcNum = numFunction(3, 6);
    cout << funcNum << '\n';
    int referNum1 = 12;
    int referNum2 = 7;
    referFunction(referNum1, referNum2);
    cout << referNum1 << " " << referNum2;
    cout << '\n';


    //Class Challenge
    newClass classObj;
    newClass classObj2;
    classObj.classNum = 28;
    classObj.className = "Anthony";
    cout << classObj.classNum << '\n';
    cout << classObj.className << '\n';
    classObj.classMethod();
    classObj.classMethod2();

    //Constructor Method Challenge
    student studentObj1(28, "Anthony");
    student studentObj2(29, "Taylor");
    cout << studentObj2.name << '\n';

    //Used for Polymorphism Challenge
    fruit apple;
    vegetable kale;
    apple.growFood();
    kale.growFood();

    //Exception Challenge
    try
    {
        int age = 19;
        if (age >= 21)
        {
            cout << "You are old enough to buy alcohol." << '\n';
        }
        else
        {
            throw (21);
        }
    }
    catch (int errorCode)
    {
        cout << "Error Code: " << errorCode << '\n';
        cout << "You are underage." << '\n';
    }






    return 0;
}
