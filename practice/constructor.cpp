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