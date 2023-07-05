/*
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1 A Task

This program asks user to input two integers and then finds which one is smaller.
*/
#include <iostream>
using namespace std;

int main(){
    int Fnumber, Snumber;
    cout<< "Enter the first number: ";
    cin>> Fnumber;
    cout<< "Enter the second number: ";
    cin>> Snumber;

    if(Fnumber < Snumber){
        cout<<"The smaller of the two is: " << Fnumber <<endl;
    }
    if(Snumber < Fnumber){
        cout<<"The smaller of the two is: " << Snumber <<endl;
    }




    return 0;
}