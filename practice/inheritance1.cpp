#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "I can eat! " << endl;
    };
    void sleep(){
        cout << "I can sleep! " << endl;
    };
};

class dog : public Animal{
    public:
    void bark(){
        cout << "I can bark, woof! woof! " << endl;
    }
};

int main(){
    dog mydog; // creating object
    mydog.bark();
    mydog.sleep();
    mydog.eat();
    return 0;
}