//1. print sum of two numbers using C++. //

#include <iostream>
using namespace std;

int main()
{
    int a, b; 
    cout << "Enter two numbers: \n";
    cin >> a >> b;
    cout << "" a + b;
}

//2. Raising number n to a power p is the same as multipzlying n with itself p times //

#include<iostream>
using namespace std;

int main(){
    int n, p;
    cout << "Enter two numbers:" << endl;
    cin >> n >>p;
    int ans = 1;
    for(int i=1; i<=p; i++){
        ans *= n;
    }
    cout << n << " to the power " << p << " is " << ans;
}

//3. Write a function called power() that takes a double value and an int p as arguments and returns the results as double value.//

#include<iostream>
using namespace std;

double power(double n, int p){
    double ans = 1;
    for(int i=1; i<=p; i++){
        ans *= n;
    }
    return ans;
}
int main(){
    double n;   
    int p;
    cout << "Enter two numbers:" << endl;   
    cin >> n >> p;
    double result = power(n, p);
    cout << n << " to the power " << p << " is " << result;
}


//4. Use the default of 2 for p, so that if this argument is omitted, the nubmber will be squared.//
#include<iostream>
using namespace std;

int power(int n, int p=2){
    int ans = 1;
    for(int i=1; i<=p; i++){
        ans *= n;
    }
    return ans;
}
int main(){
    int n, p;   
    cout << "Enter Base n :" << endl;   
    cin >> n;
    cout << "Enter power p :" << endl;
    cin >> p;
    double result;
    if(p < 0){
      result = power(n);
    }
    else{
         result = power(n, p);
    }
    cout << n << " to the power " << p << " is " << result;
}
//5. calculate the factorial of given number. //

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;
    int fact = 1;
    for(int i = 1; i<=num; i++){
        fact *= i;
    }
    cout << "factorial of " << num << " is " << fact;
}

