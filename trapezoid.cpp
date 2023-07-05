/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 4 Task F

This program prints trapezoid using user inputed setting.
*/
#include <iostream>
using namespace std;

int main(){
    int width, height;
    int i, k;
    char asterisks= '*';
    cout<< "Input width: "<< endl;
    cin>> width;
    cout<< "Input height: "<< endl;
    cin>> height;
    int spaces = 0;
    int stars = width;

    for(int counter=0; counter< height; counter++  ){
        spaces += 1;
        stars -= 2;
    }
    stars= stars+1;

    if(stars< 0){
        cout<<"Impossible shape!";
    }
    else{


    for(int i=0;i<height;i++)
    {
        for(int k=width-(i*2);k>0;k--)
            cout<<asterisks;
            cout<<endl;
                for(int j=0;j<i+1;j++)
                    cout<<" ";
    }
 

 
    }



    







    return 0;
}
