/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 4 Task G

This program asks user for checkerboard parameters, and then prints 3x3 checkerboard.
*/


// ***   ***   ***   ***   ***
// ***   ***   ***   ***   ***
// ***   ***   ***   ***   ***
//    ***   ***   ***   ***   
//    ***   ***   ***   ***   
//    ***   ***   ***   ***   
// ***   ***   ***   ***   ***
// ***   ***   ***   ***   ***
// ***   ***   ***   ***   ***
//    ***   ***   ***   ***   
//    ***   ***   ***   ***   
//    ***   ***   ***   ***   
// ***   ***   ***   ***   ***
// ***   ***   ***   ***   ***
// ***   ***   ***   ***   ***
//    ***   ***   ***   ***   
//    ***   ***   ***   ***   
//    ***   ***   ***   ***   
// ***   ***   ***   ***   ***
// ***   ***   ***   ***   ***
// ***   ***   ***   ***   ***
//    ***   ***   ***   ***   
//    ***   ***   ***   ***   
//    ***   ***   ***   ***   
// ***   ***   ***   ***   ***
// ***   ***   ***   ***   ***
// ***   ***   ***   ***   ***


#include <iostream>
using namespace std;
int main(){
    int height;
    int width;
    char asterisks= '*';

    cout<< "Input width: "<< endl;
    cin>>width;
    cout<< "Input height: "<<endl;
    cin>>height;
    cout<<endl<<"Shape: "<<endl;
    int star=0;
    int space=0;
    int reset= 0;
    int column; //top to bottom
    int row; //left to right
    for(row=0; row<height; row++){
        for(column=0; column < width; column++){
            if((row % 6< 3 && column %6 < 3) || (row%6 >= 3 && column%6 >= 3)){
                if(star<3)cout<< asterisks;
                star++;
                if(star == 3)star=reset;

            }
            else{
                if(space<3) cout<< " ";
                space++;
                if(space == 3) space=reset;
                
            }




        }
        cout<<"\n";
    }






































    return 0;
}