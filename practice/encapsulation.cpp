#include<iostream>
using namespace std;

class Employee{
    private:
     int salary;
    public:
    // setter function
     void setSalary(int s){
        salary = s;
     };
    // getter function
     int getSalary(){
        return salary;
     };
};

int main(){
    Employee employeeObj;
    employeeObj.setSalary(60000);
    cout << employeeObj.getSalary();
    return 0;
}   