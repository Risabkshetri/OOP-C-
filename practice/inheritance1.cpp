// #include <iostream>
// using namespace std;

// // Base class
// class Animal {
// public:
//     void eat() {
//         cout << "I can eat!" << endl;
//     }
    
//     void sleep() {
//         cout << "I can sleep!" << endl;
//     }
// };

// // Derived class
// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "I can bark! Woof woof!" << endl;
//     }
// };

// int main() {
//     // Create object of the Dog class
//     Dog myDog;

//     // Calling members of the base class
//     myDog.eat();
//     myDog.sleep();

//     // Calling member of the derived class
//     myDog.bark();

//     return 0;
// }


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