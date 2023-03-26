#include<iostream>
using namespace std;

class comp{
    private:
        int real,imag;
    public:
        comp(){
            real=0;
            imag=0;
        }
        comp(int a){
            real=a;
            imag=a;
        }
        comp(int a,int b){
            real=a;
            imag=b;
        }
        void add(comp a, comp b){
            real = a.real+b.real;
            imag = a.imag+b.imag;
        }
        void display(){
            cout<<real<<"+"<<imag<<"i";
        }
};

void addComplexNumbers(){
    int real,imag;

    cout<<"Enter a value for real and imaginary parts of complex number: ";
    cin>>real;
    comp a(real);
    cout<<"The first complex number is: ";
    a.display();
    cout<<"\n\n\n";

    cout<<"Enter 2 values for real and imaginary parts of complex number: "<<endl;
    cin>>real>>imag;
    comp b(real,imag);
    cout<<"The second complex number is: ";
    b.display();
    cout<<"\n\n\n";

    comp c;
    cout<<"Third complex number is: ";
    c.display();
    cout<<"\n\n\n";
    cout<<"The resultant complex number of the given 2 complex numbers is: ";
    c.add(a,b);
    c.display();
    cout<<"\n\n\n";
}

int main(){
    cout<<"Addition of Complex Numbers\n\n\n";
    addComplexNumbers();
    return 0;
}
