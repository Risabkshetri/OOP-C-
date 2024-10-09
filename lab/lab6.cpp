// // different types of inheritance

// single inheritance

#include<iostream>
using namespace std;

class Animal{
    public:
    string sound;
    void animalSound(){
        cout << "Enter animal sound: " << endl;
        cin >> sound;
       
        cout << "dog barks, " << sound << endl;
    }

};

class dog : public Animal{
    public:
    
};

int main(){
    Animal myAnimal;
    myAnimal.animalSound();
    dog mypet;
    mypet.animalSound();
    return 0;
}