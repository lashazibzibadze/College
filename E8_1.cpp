/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E8.1

This program does specific provided setting.

Task: 
Write a program that carries out the following tasks:
Open a file with the name hello.txt.
Store the message “Hello, World!” in the file.
Close the file.
Open the same file again.
Read the message into a string variable and print it.
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    string text;

    ofstream txtfile("hello.txt");
    // txtfile.open("hello.txt");

    // cin.geline(text, sizeof(text));
    txtfile<< "Hello, World!";
    txtfile.close();
    ifstream txtfilein("hello.txt");


    getline(txtfilein, text);
    cout<< text<<endl;
    txtfile.close();












    return 0;
}