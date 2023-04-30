#include <iostream>

class class_2; // Forward declaration of class_2

class class_1 {
private:
    int num1;

public:
    class_1(int n = 0) : num1(n) {}
    friend void swap(class_1&, class_2&);
    void display() { std::cout << "num1 = " << num1 << "\n"; }
};

class class_2 {
private:
    int num2;

public:
    class_2(int n = 0) : num2(n) {}
    friend void swap(class_1&, class_2&);
    void display() { std::cout << "num2 = " << num2 << "\n"; }
};

void swap(class_1& c1, class_2& c2) {
    int temp = c1.num1;
    c1.num1 = c2.num2;
    c2.num2 = temp;
}

int main() {
    int num1, num2;

    std::cout << "Enter num1: ";
    std::cin >> num1;
    std::cout << "Enter num2: ";
    std::cin >> num2;

    class_1 c1(num1);
    class_2 c2(num2);

    std::cout << "Before swapping:\n";
    c1.display();
    c2.display();

    swap(c1, c2);

    std::cout << "After swapping:\n";
    c1.display();
    c2.display();

    return 0;
}
