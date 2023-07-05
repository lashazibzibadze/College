/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 3 Task A

This program asks user for input date and then prints corresponding storage value
*/



#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    string date;
    string user_input;
    double eastSt, eastEl, westSt, westEl;
    ifstream fin("Current_Reservoir_Levels.tsv");
    cout<< "Enter date: ";
    cin>> user_input;

    if (fin.fail()) {
    
        cerr << "File cannot be opened for reading." <<endl;


        exit(1); //Close the window
    }
    string junk;
    getline(fin, junk);


        while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){



            fin.ignore(INT_MAX, '\n');
            if(fin.is_open()){
            if(date == user_input){
                getline(fin, date);
                
                cout<< "East basin storage: " << eastSt<< " billion gallons.";

            }
            }

            


        }
            










    




    fin.close();
}

