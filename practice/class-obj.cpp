#include<iostream>
using namespace std;

class student {
    public:
     string name;// No need to worry about the size; it grows dynamically.
     int rollno;
     float marks;
     void bio(){
        cout << "Name: " << name << endl;
        cout << "RollNo: " << rollno << endl;
        cout << "Marks: " << marks << endl;
     };
};

int main(){
    student ugStudent;
    cout << "Enter Name: " << endl;
    cin.ignore();
    
    getline(cin, ugStudent.name);// We can input very long names here.
    cout << "Enter Rollno: " << endl;
    cin >> ugStudent.rollno;
    cout << "Enter Marks: " << endl;
    cin >> ugStudent.marks;
    
    ugStudent.bio();
    return 0;
}


#include<iostream>
#include<iomanip>// Include this for formatting
using namespace std;

class student {
    public:
     string name;
     int rollno;
     float marks;
     void bio(){
        cout << left << setw(20) << "Name" 
             << left << setw(10) << "RollNo" 
             << left << setw(10) << "Marks" << endl;

        cout << left << setw(20) << name 
             << left << setw(10) << rollno 
             << left << setw(10) << marks << endl;
     };
};

int main(){
    int noOfStudents;
    cout << "Enter number of students: " << endl;
    cin >> noOfStudents;
    student ugStudent[noOfStudents];
    for(int i=0; i<noOfStudents; i++){
    cout << "Enter Name: " << endl;
    cin.ignore();
    getline(cin, ugStudent[i].name); // Get full name including spaces
    cout << "Enter Rollno: " << endl;
    cin >> ugStudent[i].rollno;
    cout << "Enter Marks: " << endl;
    cin >> ugStudent[i].marks;
    }

    cout << endl << "Student Information:" << endl;
    cout << "----------------------" << endl;
    for(int i=0; i<noOfStudents; i++){
        ugStudent[i].bio();
    }
    return 0;
}
