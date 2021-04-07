/*
 * Author: Pujan Patel
 * 4/5/2021
 * uses Linked List for Student List
 */
#include "Node.h"
#include "Student.h"
#include <cstddef>
#include <iostream>

using namespace std;
void addStudent(char* firstName, char* lastName, int studentID, float studentGPA);
void printStudent(Node* next);
Node* head = NULL;

int main() {
    cout << "Please type first name <enter> last name <enter> ID <enter> GPA and the Linked list will be printed" << endl;
    char* firstName = new char[80];
    char* lastName = new char[80];
    int studentID;
    float studentGPA;
    cin >> firstName;
    cin >> lastName;
    cin >> studentID;
    cin >> studentGPA;
    addStudent(firstName, lastName, studentID, studentGPA);
    printStudent(head);
    
    return 0;
}
void addStudent(char* firstName, char* lastName, int studentID, float studentGPA) {
    Student* newStudent = new Student(firstName, lastName, studentID, studentGPA);
    Node* current = head;
    if(current == NULL) {
        head = new Node(newStudent);
        head->setStudent(newStudent);
    }
    else {
        while (current->getNext() != NULL) {
            current = current->getNext();
        }
        current->setNext(new Node(newStudent));
        current->getNext()->setStudent(newStudent);
    }
}
void printStudent(Node* next) {
    if(next == head) {
        cout << next->getStudent()->getFirst() << endl;
        cout << next->getStudent()->getLast() << endl;
        cout << next->getStudent()->getID() << endl;
        cout << next->getStudent()->getGPA() << endl;
        printStudent(next->getNext());
    }
}
