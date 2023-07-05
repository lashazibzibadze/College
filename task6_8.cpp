/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E6.8

This program check if two arrays have the same elemets in the same order.
Task: 
Write a function
bool equals(int a[], int a_size, int b[], int b_size)
that checks whether two arrays have the same elements in the same order.
*/
#include <iostream>
using namespace std;


bool equals(int a[], int a_size, int b[], int b_size){
    int counter=0;
    bool result;
    if(a_size == b_size){
        for(int i=0; i<= a_size; i++){
            if(a[i] == b[i]){
                counter++;
            }
            if(counter == b_size){
                result= true;
            }
        }

    }
    
    else{
        result= false;
    }
    return result;


}

int main(){
    int k_size= 2;
    int k[k_size]= {1, 2};
    int v_size= 2;
    int v[v_size]= {8, 2};
    cout<< equals(k, k_size, v, v_size);





    return 0;
}

