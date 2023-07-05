/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 4 Task E

This program prints the triangle which starts from top.
*/
#include <iostream>
using namespace std;

int main(){
    int side_length;
    int i, k;
    char asterisks= '*';
    cout<< "Input side length: "<< endl;
    cin>> side_length;


    for(i= 1; i <= side_length; i++){
        for(k=1; k< i; k++){
            cout<< " ";
        }
        for(k= 1; k<= side_length-i+1; k++){
            cout<< asterisks;
        }
        cout<< "\n";
    }



    







    return 0;
}
