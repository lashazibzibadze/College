/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 2 C Task

This program uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).
*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int FIB[60];
    FIB[0]= 0;
    FIB[1]= 1;
    cout<< FIB[0]<<endl;
    cout<< FIB[1]<<endl;
    for(int i=2; i<60; i++){
        FIB[i]= FIB[i-1] + FIB[i-2];
        cout<< FIB[i] << endl;
    }




    return 0;
}