#include<iostream>
using namespace std;

class Base{
    protected:
     int x;
    public:

    void input(){
        cout << "Enter the value of x: ";
        cin >> x;
    };
    void display(){
        cout << x << " is member of base class." << endl;
    };

};

class Derived_class : public Base{
    public:
    void input(){
        cout << " Enter value of x  :" << endl;
        cin >> x;
    }
    void display(){
        cout << x << " is member of derived class." << endl;
    };
};

int main(){
    Base b;
    Derived_class d;

    b.input();
    b.display();
    d.input();
    d.display();

}
