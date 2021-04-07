#include "Student.h"

Student::Student(char* firstName, char* lastName, int studentID, float studentGPA) {
    first = firstName;
    last = lastName;
    ID = studentID;
    GPA = studentGPA;
}
char* Student::getFirst() {
    return first;
}
char* Student::getLast() {
    return last;
}
int Student::getID() {
    return ID;
}
float Student::getGPA() {
    return GPA;
}
