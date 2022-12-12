// ParametersExercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Transaction.h"

using std::cout;

//Example of using &(reference) and how it allows change to deposit outside of changeTransaction


void tryToChangeTransaction(Transaction t)
{
    t.DoubleAmount();
}

void changeTransaction(Transaction& t)
{
    t.DoubleAmount();
}


int main()
{
    Transaction deposit(50, "Deposit");
    cout << "Original: " < , deposit.Report() << '\n';
    tryToChangeTransaction(deposit);
    cout << "After pass by value: " << deposit.Report() << '\n';
    changeTransaction(deposit);
    cout << "After pass by reference: " << deposit.Report() << '\n';

    return 0;

}
