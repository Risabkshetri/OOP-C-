// inside the class

#include <iostream>
using namespace std;

class animal
{
public:
    string name;
    string category;
    float avgWeight;
    animal(string animalName, string animalCategory, float animalAvgWt)
    {
        name = animalName;
        category = animalCategory;
        avgWeight = animalAvgWt;
    }
};

int main()
{
    animal animalObj("Tiger", "Mammal", 100.68);
    animal birdObj("Peagon", "Aves", 0.68);

    cout << animalObj.name << " " << animalObj.category << " " << animalObj.avgWeight << "\n"; 
    cout << birdObj.name << " " << birdObj.category << " " << birdObj.avgWeight << "\n";
    return 0;
}

// outside the class
#include <iostream>
using namespace std;

class animal
{
public:
    string name;
    string category;
    float avgWeight;
    animal(string animalName, string animalCategory, float animalAvgWt);
}; 

animal::animal(string animalName, string animalCategory, float animalAvgWt)
    {
        name = animalName;
        category = animalCategory;
        avgWeight = animalAvgWt;
    }

int main()
{
    animal animalObj("Tiger", "Mammal", 100.68);
    animal birdObj("Peagon", "Aves", 0.68);

    cout << animalObj.name << " " << animalObj.category << " " << animalObj.avgWeight << "\n";
    cout << birdObj.name << " " << birdObj.category << " " << birdObj.avgWeight << "\n";
    return 0;
}

// copy contructor

#include<iostream>
using namespace std;

class User{
    public:
    string name;
    string email;
    string password;

    // default constructor
    User(){
        name = "John";
        email = "john@.com";
        password = "password123";

        cout << "Default constructor called." << endl;
    }

    // parameterized constructor
    User(string name1, string email1, string password1){
        name = name1;
        email = email1;
        password = password1;

        cout << "Parameterized constructor called." << endl;
    }
    // copy constructor
    User(User &obj){
        name = obj.name;
        email = obj.email;
        password = obj.password;

        cout << "Copy constructor called." << endl;
    }

    void display(){
        cout << "Name: " << name << endl << "email: " << email << endl << "Password: " << password << endl;
    }    

};

int main(){
    User defaultUser;
    defaultUser.display();

    User userObj("Rishab", "rishab@.com", "password123");
    userObj.display();

    User copyUser(userObj);
    copyUser.display();
}