/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 3 Task C

This program asks user to input two dates and then program returns which basin had higher elevation in that dates.
*/



#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    string date;
    string user_input_one;//start date
    string user_input_two;//end date
    double eastSt, eastEl, westSt, westEl;
    ifstream fin("Current_Reservoir_Levels.tsv");
    cout<< "Enter starting date: ";
    cin>> user_input_one;
    cout<< "Enter ending date: ";
    cin>> user_input_two;

    if (fin.fail()) {
    
        cerr << "File cannot be opened for reading." <<endl;


        exit(1); //Close the window
    }
    string junk;
    getline(fin, junk);
    int i=0;



        while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){



            fin.ignore(INT_MAX, '\n');
            if(fin.is_open()){
                if(date == user_input_one) i++;
                else if(date> user_input_two) break;

                for(int j =0; j<i; j++){

                    if(eastEl < westEl) cout<<date << " West" << endl;
                    else if(eastEl > westEl) cout<<date << " East" << endl;
                }

            }

            


        }
            










    




    fin.close();
}

