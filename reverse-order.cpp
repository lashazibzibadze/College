/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 3 Task D

This program asks user to input two dates and then program prints west basin elevation in reverse order.
*/



#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>

using namespace std;


int main(){

    ifstream fin("Current_Reservoir_Levels.tsv");

    if (fin.fail()) {
    
        cerr << "File cannot be opened for reading." <<endl;


        exit(1); //Close the window
    }
    string junk;
    getline(fin, junk);
    string user_input_one;//earlier date
    string user_input_two;//later date
    cout<< "Enter earlier date: ";
    cin>> user_input_one;
    cout<< "Enter later date: ";
    cin>> user_input_two;
    string date;
    string copy_date[999];
    double eastSt, eastEl, westSt, westEl;
    double copy_westEl[999];
    int i=0;



        while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){



            fin.ignore(INT_MAX, '\n');

            if(fin.is_open()){
                if(date >= user_input_one && date <= user_input_two) {
                    i++;
                    copy_date[i] = date;
                    copy_westEl[i] = westEl;


                }


            }

            


        }

        for(int j = i; j > 0; j--){
            cout<< copy_date[j]<<" "<< copy_westEl[j]<< " ft. "<< endl;


        }


    




    fin.close();
}

