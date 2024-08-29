#include<iostream>
using namespace std;

class grandparent
{
  public:
  void func1()
  {
    cout << "grandparent class" << endl;
  }
};

class parent : public grandparent{
  public:
  void func2()
  {
    cout << "parent class" << endl;
  }
};    

class child : public parent{
  public:
  void func3()
  {
    cout << "child class" << endl;
  }
};

int main(){
  child myObj;
  myObj.func1();
  myObj.func2();
  myObj.func3();
  return 0;
}