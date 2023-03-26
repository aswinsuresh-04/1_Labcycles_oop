#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Create two string objects
    string str1 = "Hello";
    string str2 = "World";

    // Compare two strings
    int result = str1.compare(str2);

    if (result == 0)
    {
        cout << "Both strings are equal" << endl;
    }
    else if (result < 0)
    {
        cout << "str1 is less than str2" << endl;
    }
    else if (result > 0)
    {
        cout << "str1 is greater than str2" << endl;
    }

    // Concatenate two strings
    string str3 = str1 + " " + str2;
    cout << "Concatenated string: " << str3 << endl;

    // Get the length of a string
    int length = str3.length();
    cout << "Length of the string: " << length << endl;

    return 0;
}
