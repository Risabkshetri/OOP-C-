// write a program to fing the transpose of matrix

#include<iostream>
using namespace std;

int main(){
    int arr[3][3], transpose[3][3], i, j;
    cout << "Enter element of array : " << endl;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            transpose[i][j] = arr[j][i];
        }
    }
    cout << "Original matrix : " << endl;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
    cout << "Transpose matrix : " << endl;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout << " " << transpose[i][j];
        }
        cout << endl;
    }
}
