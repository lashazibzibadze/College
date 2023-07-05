/*
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 12 Task B

This program returns a vector with only the positive integers in the same order.
*/
using namespace std;
#include <iostream>
#include <vector>

vector<int> goodVibes(const vector<int> v){
    vector<int> result;
    //Using for loop to save positive integers into another empty vector
    for(int i=0; i < v.size(); i++){
        if(v[i] >0){
            result.push_back(v[i]);
        }
    }
    return result;
}

int main(){
    //Test sample
    vector<int> v{1,2,-1,10,-50,5,4,-1};
    vector<int> check;
    check= goodVibes(v);
    for(int i=0; i < check.size(); i++){
        cout<< check[i]<<endl;
    }

    return 0;
}
