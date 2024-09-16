#include <iostream>
using namespace std;

int addition(int x, int y)
{
    return (x + y);
}
int subtraction(int x, int y)
{
    return (x - y);
}
int multiplication(int x, int y)
{
    return (x * y);
}
int division(int x, int y)
{
    return (x / y);
}

int main()
{
    int num1, num2;
    char choice;
    char oprt;

    do
    {
        cout << "Enter first number, operator, and second number : ";
        cin >> num1 >> oprt >> num2;
        switch (oprt)
        {
        case '+':
            cout << "Sum = " << addition(num1, num2);
            break;
        case '-':
            cout << "subraction = " << subtraction(num1, num2);
            break;
        case '*':
            cout << "multiplication = " << multiplication(num1, num2);
            break;
        case '/':
            cout << "division = " << division(num1, num2);
            break;
        default:
            cout << "Invalide choice!";
        }

        cout << "\nDo you want to continue (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    return 0;
}