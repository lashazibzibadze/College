/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 2 A Task

This program asks the user to input an integer in the range 0 < n < 100. If the number is out of range, the program should keep asking to re-enter until a valid number is input
*/

#include <iostream>
#include<cmath>

using namespace std;

int main(){

    int Number;
    cout<<"Enter an integer: ";
    cin>> Number;

    while(Number >= 100 || Number <= 0){
    cout<<"Please Re-enter: ";
    cin>> Number;

    }

    cout<< "Number Squared is " << pow(Number, 2);

    return 0;
}