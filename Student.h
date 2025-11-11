#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;
#include <Person.h>


class Student : public Person
{
private:
    int yearLevel;
    string major;
    public:
        Student():Person(){
        }
        Student(string n,int i,int y,string m) :Person(string n,int i){
        }
        display(){}
         


};

#endif // STUDENT_H
