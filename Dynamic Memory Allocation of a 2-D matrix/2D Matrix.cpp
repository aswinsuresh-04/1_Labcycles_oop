#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int **data;
public:
    Matrix(int r, int c) {
        rows = r;
        cols = c;
        data = new int *[rows];
        for(int i = 0; i < rows; i++) {
            data[i] = new int[cols];
        }
        cout << "Matrix object created." << endl;
    }

    ~Matrix() {
        for(int i = 0; i < rows; i++) {
            delete [] data[i];
        }
        delete [] data;
        cout << "Matrix object destroyed." << endl;
    }
};

int main() {
    cout << "Creating a Matrix object..." << endl;
    Matrix m(3, 4);
    cout << "Matrix object created." << endl;
    return 0;
}
