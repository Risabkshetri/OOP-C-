// Single inheritance
#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};

class Car : public Vehicle
{
};

int main()
{
    Car obj;
    return 0;
}

// multiple inheritance
#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};

class FourWheeler
{
public:
    FourWheeler()
    {
        cout << "This is a 4 wheeler Vehicle" << endl;
    }
};

class Car : public Vehicle, public FourWheeler
{
};

int main()
{
    Car obj;
    return 0;
}

// Multilevel Inheritance  #include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};
class fourWheeler : public Vehicle
{
public:
    fourWheeler()
    {
        cout << "Objects with 4 wheels are vehicles" << endl;
    }
};
class Car : public fourWheeler
{
public:
    Car()
    {
        cout << "Car has 4 Wheels" << endl;
    }
};

// main function
int main()
{

    Car obj;
    return 0;
}

// Multilevel Inheritance  #include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};
class fourWheeler : public Vehicle
{
public:
    fourWheeler()
    {
        cout << "Objects with 4 wheels are vehicles" << endl;
    }
};
// sub class derived from two base classes
class Car : public fourWheeler
{
public:
    Car()
    {
        cout << "Car has 4 Wheels" << endl;
    }
};

// main function
int main()
{
    Car obj;
    return 0;
}

// C++ program for Hybrid Inheritance

#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};

// base class
class Fare
{
public:
    Fare()
    {
        cout << "Fare of Vehicle\n";
    }
};

// first sub class
class Car : public Vehicle
{
};

// second sub class
class Bus : public Vehicle, public Fare
{
};

// main function
int main()
{

    Bus obj2;
    return 0;
}
