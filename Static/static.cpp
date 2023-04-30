#include <iostream>

using namespace std;

class objects
{
private:
    static int count;

public:
    void new_object()
    {
        count++;
    }
    void del_object()
    {
        count--;
    }
    static void show_count()
    {
        cout << "Number of objects created= " << count << endl;
    }
};

int objects::count = 0;

int main()
{
    int choice;
    string option;
    objects object;
    do
    {
        cout << "Enter your choice\n";
        cout << "1 to add an object\n";
        cout << "2 to remove an object\n";
        cout << "3 to display number of objects\n";
        cout << "4 to quit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            object.new_object();
            cout << "\nAn object created\n";
            break;
        case 2:
            object.del_object();
            cout << "\nAn object removed\n";
            break;
        case 3:
            objects::show_count();
            break;
        case 4:
            return 0;
        default:
            cout << "Invalid entry\n";
        }
        cout << "Do you want to continue (enter y/n): ";
        cin >> option;
    } while (option == "y");
    return 0;
}
