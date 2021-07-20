#include <iostream>
using namespace std;


const int HOURS_IN_A_DAY= 24;
const int MINUTES_IN_AN_HOUR= 60;

int main(){

    int daysJohnWorked, hoursJohnWorked, minutesJohnWorked;
    int daysBillWorked, hoursBillWorked, minutesBillWorked;
    int combinedDays, combinedHours, combinedMinutes;
    int carriedOverHours;
    int carriedOverDays;
    int totalDays, totalHours, totalMinutes;


    cout<<"Please enter the number of days John has worked: ";
    cin>>daysJohnWorked;
    cout<<"Please enter the number of hours John has worked: ";
    cin>>hoursJohnWorked;
    cout<<"Please enter the number of minutes John has worked: ";
    cin>>minutesJohnWorked;

    cout<<" "<<endl;

    cout<<"Please enter the number of days Bill has worked: ";
    cin>>daysBillWorked;
    cout<<"Please enter the number of hours Bill has worked: ";
    cin>>hoursBillWorked;
    cout<<"Please enter the number of minutes Bill has worked: ";
    cin>>minutesBillWorked;

    combinedDays = daysJohnWorked + daysBillWorked;
    combinedHours = hoursJohnWorked + hoursBillWorked;
    combinedMinutes = minutesJohnWorked + minutesBillWorked;


    carriedOverHours = combinedMinutes / MINUTES_IN_AN_HOUR;
    totalMinutes = (combinedMinutes % MINUTES_IN_AN_HOUR);

    carriedOverDays = combinedHours / HOURS_IN_A_DAY;
    totalHours = (combinedHours % HOURS_IN_A_DAY) + carriedOverHours;

    totalDays= combinedDays + carriedOverDays;

    cout<<"The total time both of them worked together is: "<<totalDays<<" days, "<<totalHours;
    cout<<" hours and "<<totalMinutes<<" minutes."<<endl;


    return 0;
}

