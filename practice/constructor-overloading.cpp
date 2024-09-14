// constructor overloading
#include<iostream>
using namespace std;

class Area{
    public:
    float area;
    Area(){
        area = 0;
    };
    Area(float length, float height){
        area = length*height;
    }
    void disp(){
        cout << "Area = " << area << endl;
    }
    
};

int main(){
    Area o;
    Area o1(20.3, 33.3);
   
   o.disp();
   o1.disp();
   return 0;
}

// function overloading

#include<iostream>
using namespace std;

class Calculation{
    public:
    int a=10, b=20;
    void sum(){
        int sum = a+b;
        cout << "sum: " << sum << endl;
    };
    void product(){
        int prod = a*b;
        cout << "product: " << prod << endl;
    };

};
int main(){
    Calculation calc;
    calc.sum();
    calc.product();

}

