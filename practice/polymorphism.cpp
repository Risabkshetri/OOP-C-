#include<iostream>
using namespace std;

class Animal{
    public:
    void animalSound(){
        cout << "animal makes sound \n";
    }
};

class pig: public Animal{
    public:
    void animalSound(){
        cout << "pig sounds wee!, wee! \n";
    }
};

class dog: public Animal{
    public:
    void animalSound(){
        cout << "dog sounds woof!, woof! \n";
    }
};

int main(){
    Animal myAnimal;
    pig myPig;
    dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    return 0;
}
