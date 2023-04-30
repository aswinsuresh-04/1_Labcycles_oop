#include<iostream>
using namespace std;

float area(float length, float width){
    return length * width;
}

float area(float side){
    return side * side;
}

float area(float radius){
    return 3.14 * radius * radius;
}

float area(float base, float height, char type){
    if(type == 'e'){ 
        return 0.433 * base * base;
    }else{
        return 0.5 * base * height;
    }
}


float area(float base1, float base2, float height){
    return 0.5 * (base1 + base2) * height;
}

int main(){
    float length, width, side, radius, base1, base2, height;
    char type;

   
    cout<<"Enter length and width of the rectangle: ";
    cin>>length>>width;
    cout<<"Area of the rectangle: "<<area(length, width)<<endl;

    cout<<"Enter the side of the square: ";
    cin>>side;
    cout<<"Area of the square: "<<area(side)<<endl;

    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    cout<<"Area of the circle: "<<area(radius)<<endl;

    cout<<"Enter the base and height of the triangle: ";
    cin>>base1>>height;
    cout<<"Enter 'e' if the triangle is equilateral or 'i' if it is isosceles: ";
    cin>>type;
    cout<<"Area of the triangle: "<<area(base1, height, type)<<endl;

    cout<<"Enter the base1, base2, and height of the trapezoid: ";
    cin>>base1>>base2>>height;
    cout<<"Area of the trapezoid: "<<area(base1, base2, height)<<endl;

    return 0;
}
