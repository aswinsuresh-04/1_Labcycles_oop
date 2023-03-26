#include<iostream>
using namespace std;

class complex {
private:
    float real, imag;
public:
    complex() {
        real = imag = 0;
    }
    complex(float r, float i) {
        real = r;
        imag = i;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
    friend complex add(complex c1, complex c2);
};

complex add(complex c1, complex c2) {
    complex c;
    c.real = c1.real + c2.real;
    c.imag = c1.imag + c2.imag;
    return c;
}

int main() {
    complex c1(2.5, 3.7), c2(1.6, 4.2), c3;
    c1.display();
    c2.display();
    c3 = add(c1, c2);
    cout<<"Answer is: ";
    c3.display();
    return 0;
}
