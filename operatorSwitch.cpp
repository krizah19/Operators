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
    if (op == '+')
        cout << first + second;
    else if (op == '-')
        cout << first - second;
    else
        cout << "invalid operator!";
}
