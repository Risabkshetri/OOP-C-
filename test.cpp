// fucntion overloading

#include<iostream>
using namespace std;

int sum(int a, int b){ return a + b;}
int sum(int a, int b, int c){ return a + b + c;}

int main(){
    int a = 10, b = 20, c = 30;

    // function overloading
    cout << "sum = " << sum(a, b) << endl;
    cout << "sum = " << sum(a, b, c) << endl;


}
