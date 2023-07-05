/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E9.5


Task: 
Class Rectangle
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Rectangle{
    private:
        double width;
        double height;

    public:
        Rectangle();
        Rectangle(double width, double height);
        double get_perimeter();
        double get_area();
        void resize(double factor);

};
Rectangle::Rectangle(){
    width= 0;
    height = 0;;
}
Rectangle::Rectangle(double width, double height){
    this->width= width;
    this->height= height;
}

double Rectangle::get_perimeter(){
    return 2*(width + height);
}
double Rectangle::get_area(){
    return width*height;
}

void Rectangle::resize(double factor){
    width= width* factor;
    height= height* factor;
}

int main(){
    Rectangle test;
    cout<< test.get_area();


    return 0;
}


