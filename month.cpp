/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1 D Task

This program asks user to enter year and month and then prints how many days are in the entered month.
*/
#include <iostream>
using namespace std;

// 1 - 3 - 5 - 7 - 8 - 10 - 12    31 Days
// 4 - 6 - 9 - 11  30 Days
// 2   29/28 days

int main(){
    int Year, Month;
    cout<< "Enter year: ";
    cin>> Year;
    cout << "Enter month: ";
    cin>> Month;

    if( Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12){
        cout<< "31 days"<< endl;
    }
    else if( Month == 4 || Month == 6 || Month == 9 || Month == 11){
        cout << "30 days" << endl;
    }
    else if(Month == 2){

        if((Year % 4) != 0){
            cout<< "28 days"<< endl;
        }
        else if((Year % 100) != 0){
            cout<< "29 days"<< endl;
        }
        else if((Year % 400) != 0){
            cout<< "28 days"<< endl;
        }
        else {
            cout<< "29 days"<< endl;
        }
        
    

    }




    return 0;
}
