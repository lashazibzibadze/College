/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E4.8

This program asks for a word and then spells it.
*/

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string word;
    cout << "Enter a word: ";
    cin >> word;
    int k = word.length();

    for(int i=0; i< k; i++){
        cout<< word[i]<< endl;
    }



    return 0;
}
