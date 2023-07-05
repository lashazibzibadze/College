/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 4 Task C

This program prints Cross for user inputed parameters.
*/
#include <iostream>
using namespace std;

int main(){
    int size;
    int i, k;
    //char asterisks= '*';
    cout<< "Input size: "<< endl;
    cin>> size;


    for(i=0; i< size; i++){
        for(k=0; k< size; k++){
            if( i == k){
                cout << "*";
            }
            else if( k== size - 1- i){
                cout<< "*";
            }
            else{
                cout << " ";
            }


        
    }
        cout<< "\n";
    }





    







    return 0;
  }
