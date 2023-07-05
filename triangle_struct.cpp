/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E7.18

This program reads the coordinates of the triangle sides and returns perimeter.
*/
#include <cmath>
#include <string>
#include <iostream>
using namespace std;


struct Point
{
    double x;
    double y;

} cordinate_X, cordinate_Y, cordinate_Z;

struct Triangle{
    Point x;
    Point y;
    Point z;

}cordinates;

double distance(Point a, Point b){



    //Using Pythagorean distance calculating formula
    double first_point= pow(a.x - b.x, 2);  
    double second_point= pow(a.y - b.y, 2);
    double result= sqrt(first_point + second_point);

    return result;





}

double perimeter(Triangle count) {
    double result= 0;
    result= distance(count.x, count.y) + distance(count.y,count.z) + distance(count.z,count.x);

    return result;
}

int main(){
    cordinate_X.x= 5;
    cordinate_X.y= 6;
    cordinate_Y.x= 7;
    cordinate_Y.y= 8;
    cordinate_Z.x= 9;
    cordinate_Z.y= 10;
    cordinates.x= cordinate_X;
    cordinates.y= cordinate_Y;
    cordinates.z= cordinate_Z;


    cout<< perimeter(cordinates);




    return 0;
}