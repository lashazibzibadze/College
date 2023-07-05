/*
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 12 Task D

This program returns a vector of integers whose elements are the pairwise sum of the elements from the two vectors passed as arguments.
*/
using namespace std;
#include <iostream>
#include <vector>


vector<int> sumPairWise(vector<int> &v1, vector<int> &v2){
    vector<int> result; //blank vector to save the result

    //if their size match then it sums every element from the same position and save it in results vector
    if(v1.size() == v2.size()){
        for(int i=0; i< v1.size(); i++){
            result.push_back(v1[i]+v2[i]);
        }
    }
    //if their size does not match, it sums all the element and adds extra element unchanged to the results vector.
    else{
        if(v1.size() > v2.size()){
            if(v2.size() != 0){
                for(int i=0; i< v2.size(); i++){
                    result.push_back(v1[i]+v2[i]);
                }
                result.push_back(v1.back());
            }
            else{
                result= v1;
            }
        }
        //vice versa
        else{
            if(v1.size() != 0){
                if(v2.size() > v1.size()){
                    for(int i=0; i< v1.size(); i++){
                        result.push_back(v1[i]+v2[i]);
                    }
                    result.push_back(v2.back());
                }
            }
            else{
                result= v2;
            }

        }
        
    }

    return result;
}

int main(){
    //Testing the function if it works as intended.
    vector<int> v1{7, 13, 69, 666};
    vector<int> v2{};
    vector<int> test;
    test= sumPairWise(v1, v2);
    for(int i=0; i< test.size(); i++){
        cout<< test[i] << " ";
    }

    return 0;
}