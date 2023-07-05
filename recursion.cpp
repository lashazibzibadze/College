/*
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 13 Task E

This program checks if parentheses are correctly typed
*/
using namespace std;
#include<iostream>
#include<cctype>

void printRange(int left, int right){
    //Recursively printing numbers from left to right
    if(left <= right){
        cout << left << " ";
        printRange(left+1, right);
    }
    // else{
    //     cout<< "Done";
    // }
    
}

int sumRange(int left, int right){
    int result=0;

    if(left <= right){
        
        result= left+ sumRange(left+1, right);
        
               
    }


    return result;
}
//Helper function to sum up array elements
int sumArrayInRange(int *arr, int left, int right){
    int result=0;
    if(left <= right){
        result= arr[left] + sumArrayInRange(arr, left+1, right);

    }
    return result;
}

int sumArray(int *arr, int size){
    int result= 0;

    result= sumArrayInRange(arr, 0, size-1);
    return result;
}

bool isAlphanumeric(string s){
    char character= s[0];
    bool checker;
    //If string is empty return true
    if(s == ""){
        checker = true;
    }
    //if string is alphanumeric return true, else return false
    else{
        if(isdigit(character) || isalpha(character)){
            checker= isAlphanumeric(s.substr(1));
        }
        else{
            checker= false;
        }

    }
    return checker;
}
bool nestedParens(string s){
    bool checker;

    //if string has no parentheses return true
    if(s == ""){
        return true;
    }

    else{
        //if we have only one parenthesis then is it automaticaly false
        if(s.size() < 2){
            checker= false;
        }
        //if we have correct opening parenthesis and correct closing then it checks if others are correct as well recursively
        else if(s.substr(0,1) == "(" && s.back() == ')'){
            checker= nestedParens(s.substr(1, s.size() - 2));
        }
        //Everything else is false
        else{
            checker= false;
        }


    }

    return checker;
}

//Testing the function
int main() {
    cout << nestedParens("((()()()))") << endl;
    cout << nestedParens("(()())") << endl;
    return 0;
    
}