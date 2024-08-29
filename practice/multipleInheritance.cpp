#include<iostream>
using namespace std;

class Father{
    public:
    void FatherAction(){
        cout << "I am a father." << endl;
    }
};

class Mother{
    public:
    void MotherAction(){
        cout << "I am a mother." << endl;
    }
};

class son: public Father, public Mother{
    public:
    void sonAction(){
        cout << "I am a son.";
    }
};

int main(){
    son mySon;
    mySon.FatherAction();
    mySon.MotherAction();
    mySon.sonAction();
    return 0;
}