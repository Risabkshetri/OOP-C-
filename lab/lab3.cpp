// // // public specifier.

// // #include<iostream>
// // using namespace std;

// // class animal{   
// //     public:
// //     string name;

// //     void sound(){
// //         cout << "I can bark, woof!, woof!" << endl;
// //     }

// // };

// // int main(){
// //     animal pet;
// //     cout << "Enter your pet name: ";
// //     cin >> pet.name;
// //    pet.sound();
// //}
// // public specifier.

// #include<iostream>
// using namespace std;

// class animal{   
//     private:
//     string name;
//     public:
//     void setPet(string  p){
//         name = p;
//     };
//     string getPet(){
//       return name;
//     }

// };

// int main(){
//     animal pet;
//     pet.setPet("dog");
//     cout << pet.getPet() << " can bark, woof!, woof!" << endl;


// }



#include <iostream>
using namespace std;


class Animal {
public:
    string name;

   
    Animal(string name1 = "") {
        name = name1;
    }

    void sound(string name1) {
        cout << "I can bark, woof woof!" << endl;
    }

private:
    string birdName;

public:
    
    void setBird(string bird) {
        birdName = bird;
    }

    
    string getBird() {
        return birdName;
    }

protected:
    string domesticAnimalName;
};


class DomesticAnimal : public Animal {
public:
      void sound(string dom1) {
        cout << "Cat sounds lovely." << endl;
    }
};

// Main function
int main() {

    Animal myAnimal("Joy");

   
    Animal bird;
    bird.setBird("parrot");
    
    
    cout << "Bird is: " << bird.getBird() << endl;

   
    DomesticAnimal myPet;
    myPet.sound("meow");

    return 0;
}
