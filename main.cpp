#include <iostream>

using namespace std;
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
Person::Person(){
 name="n";
 id=1;
}
Person::Person(string n,int i){
    name=n;
    id=i;
        }
Person:: virtual display(){
 cout<< "Name:"<<name<<" "<<"ID:"<<id<<endl;
}
Student::Student():Person(){
        yearlevel=0;
        major="CS";
        }
Student::Student(string n,int i,int y,string m) :Person(string n,int i){
        yearLevel=y;
        major=m;
Student:: display(){
            cout<< "Name:"<<name<<" "<<"ID:"<<id<<endl;
            cout<<"Year level:"<<yearLevel<<" "<<"Major:"<<major<<endl;
        
        }

Instructor::Instructor():Person(){
        department="CS";
        experienceYears=0;
        }
Instructor:: Instructor(string n,int i,string d,int e) :Person(string n,int i){
        department=d;
        experienceYears=e;
        }
Instructor::display(){
            cout<< "Name:"<<name<<" "<<"ID:"<<id<<endl;
            cout<<"Department:"<<department<<" "<<"Years of experience:"<<experienceYears<<endl;
        
        }
    
Course::Course(){
        courseCode="1a";
        courseName="Programming";
        maxStudents=5;
        *students=nullptr;
        currentStudents=0;
        }
Course::Course(string cc,string cn,int maxS,Student[]group,int curr){
        courseCode=cc;
        courseName=cn;
        maxStudents=maxS;
        Student [] class=new Student sizeof(Student);
        for(int i=0;i<=group.size;i++){
            class[i]=group[i];
        }
        *students=&class;
        currentStudents=curr;
        }
Course:: addStudent(const Student& s){
            if(currentStudents<maxStudents){
                    temp=currentStudents;
        for(int i=0;i<=temp;i++){
            if(*students[i]==nullptr){
                *students[i]=s;
                currentStudents++;
            }
            
        }
            }
            else 
                cout<<"Class is full"<<endl;
        }
Course::displayCourseInfo(){
        cout<<"Course"<<courseCode<<"-"<<courseName<<endl;
        cout<<"Max students"<<maxStudents<<endl;
        for(int i=0;i<currentStudents;i++){
            *students[i].display();
        }
        cout<<"Current number students "<<currentStudents<<endl;
        }





}



int main()
{
Student s=Student("Omar Nabil",2202,2,"Informatics");
 Instructor I=Instructor("Dr Lina Khaled",1111,"Computer Science",5);
 Course c= Course("CS101","Introduction to Programming",3,&Student,1);
}
