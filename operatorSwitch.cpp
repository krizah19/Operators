#include <iostream>

using namespace std;

int main()
{
    cout << "enter numbers: ";
    int first;
    int second;
    cin >> first >> second;

    cout << "enter the operator: ";
    char op;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << first + second;
        break;
    case '-':
        cout << first - second;
        break;
    default:
        cout << "invalid operator!";
    }
}