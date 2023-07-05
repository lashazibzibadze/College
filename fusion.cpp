/*
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 12 Task C

This program appends elements of the second vector into the first and empties the second vector.
*/
using namespace std;
#include <iostream>
#include <vector>

void gogeta(vector<int> &goku, vector<int> &vegeta){
    //adding vector vegetas elements to vector gokus
    for(int i=0; i< vegeta.size(); i++){
        goku.push_back(vegeta[i]);
    }
    //clearing the vector
    vegeta.clear();
}

int main(){
    //Two sample vectors
    vector<int> v1{1,2,3,4,5};
    vector<int> v2{10,17,18};
    gogeta(v1, v2);
    //Testing if the function worked
    for(int i=0; i< v1.size(); i++){
        cout<< v1[i]<<endl;
    }
    cout<<endl;
    for(int i=0; i< v2.size(); i++){
        cout<< v2[i]<<endl;
    }
    return 0;
}