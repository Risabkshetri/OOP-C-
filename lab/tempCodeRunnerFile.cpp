// #include<iostream>
// using namespace std;

// class Calcultion {
//     protected:
//     int num1 = 10, num2 = 20;

//     public:
//     void operations(){
//         cout << "sum = " << num1 + num2 << endl;
//     }
// };

// class multiplication : public Calcultion{
//     public:
//     void operations(){
//         cout << "Multiplication : " << num1*num2 << endl;
//     }
// };
// int main(){
//    Calcultion c;
//    multiplication m;
//    m.operations();
//    c.operations();
// }


// implementation of virtual function

#include<iostream>
using namespace std;

class Base{
    public:
    int num;

    virtual void setmember(){
        cout << "Enter the value of x : ";
        cin >> num;
    }
    virtual void disp(){
        cout << num << " is member of base class." << endl;
        
    }

};

class Derived_class : public Base{
    public:
    void setmember() override{
        cout << "Enter value of x : ";
        cin >> num;
    }
    void disp() override{
        cout << num << " is member of derived class";
    }
};

int main(){
    Base b;
    Derived_class d;

    b.setmember();
    b.disp();

    d.setmember();
    d.disp();

    return 0;
}