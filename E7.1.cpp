/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E7.1

Task:
Write a function
void sort2(double* p, double* q)
that receives two pointers and sorts the values to which they point. If you call
sort2(&x, &y)
then x <= y after the call.
*/
#include <iostream>
using namespace std;

void sort2(double* p, double* q){
    double sort;
    if(*p>*q){
        sort= *p;
        *p =*q;
        *q= sort; 
    }


}

int main(){
    double y=3.2,x=7.8;
    sort2(&x,&y);
    return 0;
}