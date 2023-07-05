/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E5.6

This program prints middle character/s out of a string.

Write a function
string middle(string str)
that returns a string containing the middle character in str if the length of str is odd, 
or the two middle characters if the length is even. For example, middle("middle")
returns "dd".
*/

#include <iostream>
#include <string>
using namespace std;
string middle(string str){
    int Size_checker= str.size();
    string memorize;


    if(Size_checker == 2){
        memorize.assign(str);
        //memorize= str[0] + str[1];
    }
    else if(Size_checker % 2 == 0){
        memorize.append(str,(Size_checker / 2 - 1), 2);
        //memorize= str[Size_checker / 2 - 1] + str[Size_checker / 2];
    }
    else if(Size_checker % 2 == 1){
        memorize.append(str,(Size_checker / 2), 1);
    }
    // cout<< memorize;
    return memorize;
}
int main(){
    middle("Aardvark");



    return 0;
}
