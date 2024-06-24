#include <iostream>
using namespace std;
int main()
{
    float x, y;
    char op;
    float div;
    cout << "\nenter first number : " << endl;
    cin >> x;
    cout << "enter operation(+,-,*,/) : " << endl;
    cin >> op;
    cout << "enter second number : " << endl;
    cin >> y;
    if (op == '+')
        cout << "addition of numbers is = " << x + y << endl;
    else if (op == '-')
        cout << "subtraction of numbers is = " << x - y << endl;
    else if (op == '*')
        cout << "product of numbers is = " << x * y << endl;
    else if (op == '/')
    {
        div = x / y;
        cout << "division of numbers is = " << div << endl;
    }

    return 0;
}