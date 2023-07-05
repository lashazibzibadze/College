/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E3.1

This program asks a user for an intenger and then writes if it is possitive or negative.
*/

#include<iostream>

using namespace std;

int main(){
    int Number;
    cout<<"Enter an integer: ";
    cin>> Number;
    
    if(Number > 0){
        cout<<"The number is positive";
    }
    else if(Number < 0){
        cout<< "Number is negative";
    }
    else{
        cout << "Number is zero";
    }




    return 0;
}
