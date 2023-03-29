#include<iostream>
using namespace std;
class matrix
{
	int** p;
	int d1, d2;
public:
	matrix() {};
	matrix(int x, int y);
	void input(int& i, int& j, int value = 0)
	{
		p[i][j] = value;
	}
	int get_value(int, int);
	void matrix_add(matrix&, matrix&);
	void matrix_mult(matrix&, matrix&);
	void matrix_transpose(matrix&);
	int matrix_trace(int);
	~matrix()
	{
		for (int i = 0; i < d1; i++)
		{
			delete p[i];
		}
		delete p;
	}
};
matrix::matrix(int x, int y)
{
	d1 = x;
	d2 = y;
	p = new int* [d1];
	for (int i = 0; i < d1; i++)
	{
		p[i] = new int[d2];
	}
}
int matrix::get_value(int i, int j)
{
	return(p[i][j]);
}
void matrix::matrix_add(matrix& a, matrix& b)
{
	for (int i = 0; i < d1; i++)
	{
		for (int j = 0; j < d2; j++)
		{
			p[i][j] = a.p[i][j] + b.p[i][j];
			cout << p[i][j] << "  ";
		}
		cout << endl;
	}
}
void matrix::matrix_mult(matrix& a, matrix& b)
{

	int i, j, k;
	d1 = a.d1;
	d2 = b.d2;
	for (i = 0; i < d1; i++)
	{
		for (j = 0; j < d2; j++)
		{
			p[i][j] = 0;
			for (k = 0; k < d1; k++)
			{
				p[i][j] += a.p[i][k] * b.p[k][j];
			}
			cout << p[i][j] << "  ";
		}
		cout << endl;
	}
}
void matrix::matrix_transpose(matrix& a)
{
	for (int i = 0; i < d1; i++)
	{
		for (int j = 0; j < d2; j++)
		{
			int v = a.p[j][i];
			cout << v << "  ";
		}
		cout << endl;
	}

}

int matrix::matrix_trace(int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + p[i][i];
	}
	return sum;
}

int main()
{
	int r1, c1, r2, c2;
	int i1, j1, value1;
	int ch, ans;
	matrix* p1, * p2;
	cout << "Enter number of Rows and Columns of the matrix: ";
	cin >> r1 >> c1;
	p1 = new matrix(r1, c1);
	cout << "Enter the elements in the matrix row by row \n";
	for (i1 = 0; i1 < r1; i1++)
	{
		for (j1 = 0; j1 < c1; j1++)
		{
			cin >> value1;
			p1->input(i1, j1, value1);
		}
	}
	cout << "Enter number of Rows and Columns of the second matrix: ";
	cin >> r2 >> c2;
	p2 = new matrix(r2, c2);
	cout << "Enter the elements in the matrix row by row \n";
	int i, j, value;
	for (i = 0; i < r2; i++)
	{
		for (j = 0; j < c2; j++)
		{
			cin >> value;
			p2->input(i, j, value);
		}
	}
	do {

		cout << "\nMatrix Operations : \nHere are some of the options available  : "
			"\n1. Addition of Matrix \n2. Multiplication of Matrix \n3. Transpose of  Matrix "
			"\n4.Trace of  Matrix \n5.Exit \nEnter any number from above :  ";
		cin >> ch;
		matrix C1(r1, c1), C2(r1, c2), C3(c1, r1), C4(c2, r2);
		switch (ch)
		{
		case 1:
			if (r1 == r2 && c1 == c2)
			{
				cout << "Sum of the matrix: \n";
				C1.matrix_add(*p1, *p2);
			}
			else { cout << "Error!\nDetails: \nBoth matrix have different number of rows and coloumns\n"; }
			break;
		case 2:
			if (c1 == r2)
			{
				cout << "Product of matrix: \n";
				C2.matrix_mult(*p1, *p2);
			}
			else { cout << "Wrong product\n"; }
			break;
		case 3:
			cout << "The transpose of first matrix : " << endl;
			C3.matrix_transpose(*p1);
			cout << "Transpose of second matrix : " << endl;
			C3.matrix_transpose(*p2);
			break;
		case 4:
			if (r1 == c1 && r2==c2)
			{
				cout << "Trace of first matrix is: ";
				int trace = (*p1).matrix_trace(r1);
				cout << trace << endl;

				cout << "Trace of second matrix is: ";
				int trace2 = (*p2).matrix_trace(r1);
				cout << trace2 << endl;
			}
			else
				cout << "Error!!!: \nTrace not possible for given matrix\n";
			break;
		case 5:
			break;
		default:
			cout << "Error!!!";
			break;
		}
		cout << "Do you want to continue?(1/0) : ";
		cin >> ans;
	} while (ans);
	cout << "Thank you";
	return 0;
}