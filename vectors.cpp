/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 12 Task 1

This program returns a vector of n integers that range from 0 to n-1.
*/
using namespace std;
#include <iostream>
#include <vector>

vector<int> makeVector(int n){
    vector<int> v;
    for(int i=0; i <= n-1; i++){
        v.push_back(i);
    }


    return v;
}

int main(){
    // vector<int> i;
    // i= makeVector(10);
    // cout<< i.size();
    return 0;
}