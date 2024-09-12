#include<iostream>
using namespace std;

class Base{
    protected:
     int x;
    public:

    virtual void input(){  // virtual keyword to allow overriding
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
