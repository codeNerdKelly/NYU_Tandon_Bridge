#include <iostream>
using namespace std;

int main() {

    int inputDollars, inputCents;
    int totalNumberOfCents, remainingCents1, remainingCents2, remainingCents3;
    int finalQuarters, finalDimes, finalNickles, finalPennies;

    cout<<"Please enter your amount in the format of dollars and cents separated by a space:"<<endl;
    cin>>inputDollars>>inputCents;

    totalNumberOfCents = (inputDollars * 100) + inputCents;
    finalQuarters = totalNumberOfCents / 25;
    remainingCents1 = totalNumberOfCents % 25;
    finalDimes = remainingCents1 / 10;
    remainingCents2 = remainingCents1 % 10;
    finalNickles = remainingCents2 / 5;
    remainingCents3 = remainingCents2 % 5;
    finalPennies = remainingCents3;

    cout<<inputDollars<<" dollars and "<<inputCents<<" cents are: "<<finalQuarters<<" quarters "<<finalDimes<<" dimes ";
    cout<<finalNickles<<" nickles and "<<finalPennies<<" pennies"<<endl;

    return 0;
}
