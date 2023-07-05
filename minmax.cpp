/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 3 Task B

This program reads the file tsv and then prints max and min in east section.
*/



#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    string date;
    double eastSt, eastEl, westSt, westEl;
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
    
        cerr << "File cannot be opened for reading." <<endl;


        exit(1); //Close the window
    }
    string junk;
    getline(fin, junk);

        double min, max;
        int m=0;
        while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){



            fin.ignore(INT_MAX, '\n');
            

            if (!eastSt) break;

            if (m++ == 0){
                min= eastSt; max= eastSt;
            }

            if(eastSt < min) min= eastSt;
            if(eastSt > max) max= eastSt;
        }
            cout<< "minimum storage in East basin: "<< min<< " billion gallons"<< endl;
            cout<< "MAXimum storage in East basin: "<< max << " billion gallons"<< endl;
            










    





    




    fin.close();
}

