// // public specifier.

// #include<iostream>
// using namespace std;

// class animal{   
//     public:
//     string name;

//     void sound(){
//         cout << "I can bark, woof!, woof!" << endl;
//     }

// };

// int main(){
//     animal pet;
//     cout << "Enter your pet name: ";
//     cin >> pet.name;
//    pet.sound();
//}
// public specifier.

#include<iostream>
using namespace std;

class animal{   
    private:
    string name;
    public:
    void setPet(string  p){
        name = p;
    };
    string getPet(){
      return name;
    }

};

int main(){
    animal pet;
    pet.setPet("dog");
    cout << pet.getPet() << " can bark, woof!, woof!" << endl;


}