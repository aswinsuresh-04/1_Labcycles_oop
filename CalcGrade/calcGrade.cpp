#include<iostream>
using namespace std;

// Function to calculate the area of a rectangle
float area(float length, float width){
    return length * width;
}

// Function to calculate the area of a square
float area(float side){
    return side * side;
}

// Function to calculate the area of a circle
float area(float radius){
    return 3.14 * radius * radius;
}

// Function to calculate the area of a triangle
float area(float base, float height, char type){
    if(type == 'e'){ // if type is 'e', calculate the area of an equilateral triangle
        return 0.433 * base * base;
    }else{ // if type is 'i', calculate the area of an isosceles triangle
        return 0.5 * base * height;
    }
}

// Function to calculate the area of a trapezoid
float area(float base1, float base2, float height){
    return 0.5 * (base1 + base2) * height;
}

int main(){
    float length, width, side, radius, base1, base2, height;
    char type;

    // Input and calculation of area of a rectangle
    cout<<"Enter length and width of the rectangle: ";
    cin>>length>>width;
    cout<<"Area of the rectangle: "<<area(length, width)<<endl;

    // Input and calculation of area of a square
    cout<<"Enter the side of the square: ";
    cin>>side;
    cout<<"Area of the square: "<<area(side)<<endl;

    // Input and calculation of area of a circle
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    cout<<"Area of the circle: "<<area(radius)<<endl;

    // Input and calculation of area of a triangle
    cout<<"Enter the base and height of the triangle: ";
    cin>>base1>>height;
    cout<<"Enter 'e' if the triangle is equilateral or 'i' if it is isosceles: ";
    cin>>type;
    cout<<"Area of the triangle: "<<area(base1, height, type)<<endl;

    // Input and calculation of area of a trapezoid
    cout<<"Enter the base1, base2, and height of the trapezoid: ";
    cin>>base1>>base2>>height;
    cout<<"Area of the trapezoid: "<<area(base1, base2, height)<<endl;

    return 0;
}