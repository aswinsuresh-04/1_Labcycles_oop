#include <iostream>
using namespace std;

class comp {
private:
    int real, imag;
public:
    comp() {
        real = 0;
        imag = 0;
    }
    comp(int a) {
        real = a;
        imag = a;
    }
    comp(int a, int b) {
        real = a;
        imag = b;
    }
    void add(comp& a, comp& b) {
        real = a.real + b.real;
        imag = a.imag + b.imag;
    }
    void display() {
        cout << real << " + " << imag << "i\n";
    }
};

void addComplexNumbers() {
    int real, imag;

    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> real;
    comp a(real);
    cout << "The first complex number is: ";
    a.display();
    cout << endl;

    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> real >> imag;
    comp b(real, imag);
    cout << "The second complex number is: ";
    b.display();
    cout << endl;

    comp c;
    cout << "The result of adding the two complex numbers is: ";
    c.add(a, b);
    c.display();
    cout << endl;
}

int main() {
    cout << "Addition of Complex Numbers\n\n";
    addComplexNumbers();
    return 0;
}
