#include<iostream>
using namespace std;

class MyClass{
    private:
        static int count;
    public:
        MyClass(){
            count++;
        }
        static void showcount(){
            cout<<"Number of objects created: "<<count<<endl;
        }
};

int MyClass::count = 0;

int main(){
    MyClass obj1, obj2, obj3;

    MyClass::showcount();

    MyClass obj4, obj5;

    obj5.showcount();

    return 0;
}
