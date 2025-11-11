#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <iostream>
using namespace std;
#include <Person.h>


class Instructor : public Person
{
private:
    string department;
    int experienceYears;
    public:
        Instructor():Person(){}
        
        Instructor(string n,int i,string d,int e) :Person(string n,int i){}
        
         display(){}
         
        virtual ~Instructor();

};

#endif // INSTRUCTOR_H
