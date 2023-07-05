/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E3.5

This program checks if the numbers are in increasing order or decreasing or neither.
*/
#include <iostream>
using namespace std;

// 3 2 1

int main(){
    int first,second,third;

    cout << "Enter first numbers: ";
    cin>>first;
    cout << "Enter second numbers: ";
    cin>>second;
    cout << "Enter third numbers: ";
    cin>>third;

    if( first< second && first < third && second < third){
        cout<< "increasing";
    }
    else if( first > second && first > third && second> third){
        cout << "decreasing";
    }
    else{
        cout<< "neither";
    }





    return 0;
}