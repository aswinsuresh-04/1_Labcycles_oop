#include <iostream>
using namespace std;

const int MAX_STUDENTS = 100;

class Student
{
  private:
    int rollNo;
    string name;
    int physics;
    int chemistry;
    int maths;
    int totalMarks;
    char grade;
    float average;
    char status;

  public:
    void input();
    void calculateGrade();
    void display() const;
};

void Student::calculateGrade()
{
    totalMarks = physics + maths + chemistry;
    average = totalMarks / 3.0;

    if (average >= 95)
    {
        grade = 'A';
        status = 'P';
    }
    else if (average >= 70)
    {
        grade = 'B';
        status = 'P';
    }
    else if (average >= 50)
    {
        grade = 'C';
        status = 'P';
    }
    else
    {
        grade = 'D';
        status = 'F';
    }
}

void Student::input()
{
    cout << "Enter name of the student: ";
    cin >> name;
    cout << "Enter roll no of the student: ";
    cin >> rollNo;
    cout << "Enter marks for physics out of 100: ";
    cin >> physics;
    cout << "Enter marks for chemistry out of 100: ";
    cin >> chemistry;
    cout << "Enter marks for maths out of 100: ";
    cin >> maths;
}

void Student::display() const
{
    cout << "Name: " << name << endl;
    cout << "Roll no: " << rollNo << endl;
    cout << "Marks for Physics out of 100: " << physics << endl;
    cout << "Marks for Chemistry out of 100: " << chemistry << endl;
    cout << "Marks for Maths out of 100: " << maths << endl;
    cout << "Total marks out of 300: " << totalMarks << endl;
    cout << "Total percentage: " << average << "%" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Status: " << status << endl;
}

int main()
{
    int n;
    cout << "Enter number of students whose details should be taken: ";
    cin >> n;
    Student students[MAX_STUDENTS];

    cout << "----------------------------------------\n";
    cout << "Enter student details\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter details of student " << i + 1 << ":" << endl;
        students[i].input();
        cout << endl;
    }

    cout << "----------------------------------------\n";
    cout << "Display student details\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Details of student " << i + 1 << ":" << endl;
        students[i].display();
        cout << endl;
    }

    return 0;
}
