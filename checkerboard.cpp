/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 4 Task B

This program prints checkerboard for user inputed parameters.
*/
#include <iostream>
using namespace std;

int main(){
    int height, width;
    int i, k;
    //char asterisks= '*';
    cout<< "Input width: "<< endl;
    cin>> width;
    cout<< "Input height: "<< endl;
    cin>> height;

    for(i=0; i< height; i++){
        for(k=0; k< width; k++){
            if (k % 2 == 0 && i %2 == 0){
                cout<< "*";
            }
            else if (k % 2 != 0 && i %2 != 0){
                cout<< "*";
            }
            else{
                cout<< " ";
            }


        
    }
        cout<< "\n";
    }





    







    return 0;
  }
