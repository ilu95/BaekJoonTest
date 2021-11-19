#include <iostream>
using namespace std;

int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return a / b;
}

int rest(int a, int b)
{
    return a % b;
}

void math(int a, int b)
{
    cout << addition(a, b) << endl;
    cout << subtraction(a, b) << endl;
    cout << multiplication(a, b) << endl;
    cout << division(a, b) << endl;
    cout << rest(a, b) << endl;
}

int main()
{
    int A, B = 0;

    cin >> A >> B;

    math(A, B);

    return 0;
}