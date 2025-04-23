#ifndef STRUCT_H
#define STRUCT_H

#include <iostream>
#include <string>
using namespace std;

struct MyStruct{
    string name;
    int age{};
    int score{};
};

inline void CreateStudent(int size) {

    MyStruct* students = new MyStruct[size];


    for (int i = 0; i < size; i++) {

        cout << "enter student name:";
        cin >> students[i].name;
        cout << "enter student age:";
        cin >> students[i].age;
        cout << "enter student score:";
        cin >> students[i].score;
    }

    for (int i = 0; i < size; i++) {
        cout << "Student created:"<< endl;
        cout << students[i].name << " " << students[i].age << " " << students[i].score << endl;
    }


    delete[] students;
}


inline int Struct() {

    int NOfStudents;
    cout << "Enter number of students:" << endl;
    cin >> NOfStudents;

    CreateStudent(NOfStudents);


    return 0;
}


#endif
