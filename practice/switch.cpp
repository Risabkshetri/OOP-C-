
// write a calculator program in C++

#include<iostream>
using namespace std;

int main(){
    int a, b;
    char choice;
    cout << "Enter value of a and b: " << endl;
    cin >> a >> b;

    cout << "Enter your choice : " << endl;
    cin >> choice;

    switch(choice){
        case '+':
           cout << "sum = " << a+b;
           break;
        case '-':
           cout << "subtraction = " << a-b;
           break;
        case '*':
           cout << "multiplication = " << a*b;
           break;
        case '/':
           cout << "division = " << a/b;
           break;
        case '%':
           cout << "mod = " << a%b;
           break;
        default :
            cout << "invalid choice";
            break;
    }

}