#include<iostream>
using namespace std;

class Calcultion {
    protected:
    int num1 = 10, num2 = 20;

    public:
    void operations(){
        cout << "sum = " << num1 + num2 << endl;
    }
};

class multiplication : public Calcultion{
    public:
    void operations(){
        cout << "Multiplication : " << num1*num2 << endl;
    }
};
int main(){
   Calcultion c;
   multiplication m;
   m.operations();
   c.operations();
}