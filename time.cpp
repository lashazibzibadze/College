/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 10 Task A

This program calculates time and interval between two given time stamps.
*/

#include <iostream>
using namespace std;

class Time { 
    public:
        int h;
        int m;
};

int minutesSinceMidnight(Time time){
    int result;
    Time AM = {0, 00};
    int day = 1440; // 1day = 1440 min
    int hours= time.h * 60;
    int minutes= time.m;
    result= hours + minutes;







    return result;

}

int minutesUntil(Time earlier, Time later){
    int result;
    int hours_earlier= earlier.h * 60 + earlier.m;
    int hours_later= later.h * 60 + later.m;
    result= hours_later - hours_earlier;




    return result;

}

int main(){
    Time time= {10, 30};
    Time time_two = {13, 40};
    cout<< "Enter first time: ";
    cin>> time.h >> time.m;
    cout<< "Enter fsecond time: ";
    cin>> time_two.h >> time_two.m;


    cout<< "These moments of time are " << minutesSinceMidnight(time)  << " and " << minutesSinceMidnight(time_two) << " minutes after midnight."<< endl;
    cout<< "The interval between them is " << minutesUntil({time.h, time.m}, {time_two.h, time_two.m}) << " minutes."<< endl;

    // cout<< minutesSinceMidnight(time)<<endl;
    // cout<< minutesUntil(time, time_two)<<endl;



    return 0;
}

