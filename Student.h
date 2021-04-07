#ifndef STUDENT_H
#define STUDENT_H

class Student {//Student Class
    public:
        Student(char*, char*, int, float);//constructor with student info
        ~Student();//deconstructor
        char* getFirst();//get first name
        char* getLast();//get last name
        int getID();//get student ID
        float getGPA();//get student GPA
    private:
        char* first;
        char* last;
        int ID;
        float GPA;
};
#endif
