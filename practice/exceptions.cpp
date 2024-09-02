// try-cath error handling method

#include <iostream>
using namespace std;
int main(){
    string password;
    cout << "Enter your password: " << endl;
    cin >> password;

    try{
        if(password == "password123"){
            cout << "Wellcome to our community, you have entered sucessfuly!";
        }
        else{
            throw(password);
        }
    }catch(string password){
        cout << "Invalid Password, Please try again.";
    }
return 0;
}