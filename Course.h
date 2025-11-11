#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;
#include <Student.h>


class Course : public Student
{
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
    public:
        Course(){}

        Course(string cc,string cn,int maxS,Student[]group,int curr){}

        addStudent(const Student& s){}

        displayCourseInfo(){}
        

   
};

#endif // COURSE_H
