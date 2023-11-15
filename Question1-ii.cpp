/* Admission number 110800
Introduction to Programming*/

#include <iostream>

using namespace std;

int main() {
    int year ;//declaration of the variable 
    cout<<"Enter the year"<<endl;
    cin>>year;
    
        if (year % 4 == 0) { //if statement with condition to check if the year that has been input is a leap  //Leap years are divisible by 4
            cout <<"The year is a leap year" ; 
        }

        else{
            cout<<"The year is not a leap year";
        }
    

    return 0;
}
