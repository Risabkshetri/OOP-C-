//  // virtual function demonstration
#include<iostream>
using namespace std;

class Base{
    protected:
     int x;
    public:

    virtual void input(){
        cout << "Enter the value of x: ";
        cin >> x;
    };

    virtual void display(){  // virtual keyword to allow overriding
        cout << x << " is a member of base class." << endl;
    };

};

class Derived_class : public Base{
    public:
    void input() override {   // override keyword to ensure correct overriding
        cout << "Enter value of x for derived class: ";
        cin >> x;
    }

    void display() override {   // override keyword to ensure correct overriding
        cout << x << " is a member of derived class." << endl;
    };
};

int main(){
    Base b;
    Derived_class d;

    b.input();
    b.display();
    
    d.input();
    d.display();

    return 0;
}


// // function overriding

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