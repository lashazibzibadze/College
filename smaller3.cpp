/*
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1 B Task
This program asks user to input three integers and then finds which one is smaller.
*/
#include <iostream>
using namespace std;

int main(){
    int Fnumber, Snumber, Tnumber;
    cout<< "Enter the first number: ";
    cin>> Fnumber;
    cout<< "Enter the second number: ";
    cin>> Snumber;
    cout<< "Enter the Third number: ";
    cin>> Tnumber; 

    if((Fnumber < Snumber) && (Fnumber < Tnumber)){

        cout<<"The smaller of the three is: " << Fnumber <<endl;

    }

    else if((Snumber < Fnumber) && (Snumber < Tnumber)){

        cout<<"The smaller of the three is: " << Snumber <<endl;

    }

    else{

        cout<<"The smaller of the three is: " << Tnumber <<endl;

    }

    return 0;
}

// 5 10 50