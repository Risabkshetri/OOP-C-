// // write a program to fing the transpose of matrix

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[3][3], transpose[3][3], i, j;
//     cout << "Enter element of array : " << endl;
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             cin >> arr[i][j];
//         }
//     }
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             transpose[i][j] = arr[j][i];
//         }
//     }
//     cout << "Original matrix : " << endl;
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             cout << " " << arr[i][j];
//         }
//         cout << endl;
//     }
//     cout << "Transpose matrix : " << endl;
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             cout << " " << transpose[i][j];
//         }
//         cout << endl;
//     }
// }

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