#include<iostream>
using namespace std;
int main() {
    int a = 9;
    cout << a << "\n";
    cout << ++a << "\n";
    cout << a++ << "\n";
    cout << a << endl;

    // circle area
    float radius;
    cout << "Enter a radius: ";
    cin >> radius;
    float area = 3.1415 * radius * radius;
    cout << area << "\n";

    // printing ascii value
    char character;
    cout << "Write a character :";
    cin >> character;
    cout << "The ascii value of " << character << " is " << (int)character;
}
