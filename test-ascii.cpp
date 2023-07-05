/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 6 Task A

This program turns user input(string) to ascii code.
*/
#include <iostream>
using namespace std;


int main(){

    string input;
    cout<<"Input: ";
    getline(cin, input);
    //cin>>input;

    for(int i=0; i < input.size(); i++){

        cout<< input[i]<< " " << (int)input[i]<<endl;


    }



    return 0;
}
