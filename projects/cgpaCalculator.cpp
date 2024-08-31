#include<iostream>
using namespace std;

int main(){
    int i;
    string subjects[] = {"Physics", "Chemistry", "Mathematics", "Biology", "Hindi", "English"};
    int noOfSubject = sizeof(subjects) / sizeof(subjects[0]);
    int marks[noOfSubject];

    for(i = 0; i<noOfSubject; i++){
        cout << "Enter marks of " << subjects[i] << endl;
        cin >> marks[i];
    };
    for(i = 0; i<noOfSubject; i++){
        cout << marks[i] <<" ";
    };
    int gradePoint[noOfSubject];
    for(i = 0; i<noOfSubject; i++){
        if(marks[i] > 90 && marks[i] <= 100){
            gradePoint[i] = 9;
        }
        else if(marks[i] > 80 && marks[i] <= 90){
            gradePoint[i] = 8;
        }
        else if(marks[i] > 70 && marks[i] <= 80){
            gradePoint[i] = 7;
        }
        else if(marks[i] > 60 && marks[i] <= 70){
            gradePoint[i] = 6;
        }
        else if(marks[i] > 50 && marks[i] <= 60){
            gradePoint[i] = 5;
        }
        else if(marks[i] > 40 && marks[i] <= 50){
            gradePoint[i] = 4;
        }
        else{
            gradePoint[i] = 0; // For marks 40 or below
        }
    };
    cout << endl;
    int totalGradepoint = 0;
    for(i = 0; i<noOfSubject; i++){
        totalGradepoint += gradePoint[i];
        cout << gradePoint[i] <<" ";
    };
    int cgpa = totalGradepoint / noOfSubject;
    cout << endl << "Your CGPA = " << cgpa;
};
