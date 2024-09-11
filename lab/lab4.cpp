// // this is for testing purpose, need not to write on lab file!
//nested class demonstration
#include<iostream> 
using namespace std; 
class Students {
   public:             
   class Friends {
      private:
      string contactNo;
      public:
      void getdata(string n) {
        contactNo = n;
      }
      void putdata() {
         cout << "My contact number is " << contactNo;
      }
   };
};
int main() {
   cout<<"Nested classes in C++"<< endl;
   Students :: Friends myFriend;
   myFriend.getdata("+9139598765");
   myFriend.putdata();
   return 0;
}


// // friend function demonstration

#include<iostream>
using namespace std;

class Students {
   private:
      string name;

   public:
      Students(string studentName) : name(studentName) {}
      friend void showStudentName(Students& s);
};

void showStudentName(Students& s) {
   
   cout << "Student's name is: " << s.name << endl;
}

int main() {
   Students student1("Alice");  
   showStudentName(student1);
   return 0;
}
