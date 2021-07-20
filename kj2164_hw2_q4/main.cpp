#include <iostream>
using namespace std;

int main() {

    int integerOne, integerTwo;
    int integersSum, integersDifference, integersProduct, integersDiv, integersMod;
    double integersQuotient;

    cout<<"Please enter two positive integers separated by a space: "<<endl;
    cin>>integerOne>>integerTwo;

    integersSum = integerOne + integerTwo;
    integersDifference = integerOne - integerTwo;
    integersProduct = integerOne * integerTwo;
    integersQuotient = (double) integerOne / integerTwo;
    integersDiv = integerOne / integerTwo;
    integersMod = integerOne % integerTwo;

    cout<<integerOne<<" + "<<integerTwo<<" = "<<integersSum<<endl;
    cout<<integerOne<<" - "<<integerTwo<<" = "<<integersDifference<<endl;
    cout<<integerOne<<" * "<<integerTwo<<" = "<<integersProduct<<endl;
    cout<<integerOne<<" / "<<integerTwo<<" = "<<integersQuotient<<endl;
    cout<<integerOne<<" div "<<integerTwo<<" = "<<integersDiv<<endl;
    cout<<integerOne<<" mod "<<integerTwo<<" = "<<integersMod<<endl;



    return 0;
}

