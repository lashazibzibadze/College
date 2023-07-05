/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 2 C Task

This program creates an array of 10 integers, and provides the user with an interface to edit any of its elements.
*/
#include<iostream>
using namespace std;

int main(){
    
    int myData[10];
    int index, value;
    for(int i=0; i< 10; i++){
        myData[i] = 1;
        cout<< myData[i] << " ";
    }

    do{
        cout<< endl<< "Input index: ";
        cin>> index;
        cout<< "Input value: ";
        cin>> value;

        if(index >= 0 && index < 10){
            myData[index] = value;
        }

        if(index < 10 && index >= 0){
            for(int i=0; i<10; i++){
                cout<< myData[i]<< " ";
            }
        }
        



    } while(index >= 0 && index < 10);

    cout<< "Index out of range. Exit.";





    return 0;
}