#include<iostream>
using namespace std;

int main(){
    int *ptr = new int;
    *ptr = 10;
    
    int *arr = new int[5];
    cout << "Enter elements of array: " << endl;
    for(int i = 0; i<5; i++){
        cin >> arr[i];
    }
    
    cout << "elements of array are: " << endl;
    for(int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl << ptr << endl << *ptr << endl;
    
    delete ptr;
    delete[] arr;
    cout << "all creared!, " << *ptr;
    return 0;
    
}