#include<iostream>
using namespace std;

void pattern(int n) {
    int middle = 2 * n / 3;  
    int middle_y = middle / 2; 
    for (int k = 0; k <= 5; k++) {
     
      
       
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if (i == middle && j == middle_y) {
                    cout << "🌙  ";  
                } else {
                    cout << "* ";
                }
            }
            cout << endl;
        }
      
        
        for (int i = 1; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if (i == middle && j == middle_y) {
                    cout << "☀️  ";  
                } else {
                    cout << "* ";
                }
            }
            cout << endl;
        }
      
        
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 2; j++) {
                cout << "* ";
            }
            cout << endl;
        }
        
    cout << endl;
    }
}

int main() {
    pattern(10);  
    return 0;
}
