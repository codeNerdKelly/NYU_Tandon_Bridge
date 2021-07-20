#include <iostream>
using namespace std;

const int CENTS_PER_DOLLAR = 100;

int main() {

    int numberOfQuarters,quartersCentValue;
    int numberOfDimes, dimesCentValue;
    int numberOfNickles, nicklesCentValue;
    int numberOfPennies, penniesCentValue;
    int totalCentsValue, combinedCents, carriedOverDollars;

    cout<<"Please enter number of coins:"<<endl;
    cout<<"# of quarters: ";
    cin>>numberOfQuarters;
    cout<<"# of dimes: ";
    cin>>numberOfDimes;
    cout<<"# of nickles: ";
    cin>>numberOfNickles;
    cout<<"# of pennies: ";
    cin>>numberOfPennies;

    quartersCentValue = numberOfQuarters * 25;
    dimesCentValue = numberOfDimes * 10;
    nicklesCentValue = numberOfNickles * 5;
    penniesCentValue = numberOfPennies;

    totalCentsValue = quartersCentValue + dimesCentValue + nicklesCentValue + penniesCentValue;
    combinedCents = totalCentsValue % CENTS_PER_DOLLAR;
    carriedOverDollars = totalCentsValue / CENTS_PER_DOLLAR;

    cout<<"The total is "<<carriedOverDollars<<" dollars and "<<combinedCents<<" cents."<<endl;

    return 0;
}

