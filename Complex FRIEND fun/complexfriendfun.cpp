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
    float r, i;
    cout << "Enter the real and imaginary parts of complex number 1: ";
    cin >> r >> i;
    complex c1(r, i);

    cout << "Enter the real and imaginary parts of complex number 2: ";
    cin >> r >> i;
    complex c2(r, i);

    cout << "The two complex numbers are:\n";
    c1.display();
    c2.display();

    complex c3 = add(c1, c2);

    cout << "The sum of the two complex numbers is:\n";
    c3.display();
    return 0;
}
