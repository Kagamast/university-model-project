#include "Faculty.h"
#include "Division.h"
#include <iostream>
using namespace std;

Faculty::Faculty(string name, Adress adress) : Division(adress) {
    this->name = name;
}

string Faculty::getName() {
    return this->name;
}

Adress Faculty::getAdress() {
    return this->adress;
}

void Faculty::addStudent(Student* student) {
    this->students.push_back(student);
}

vector<Student*> Faculty::getStudents() {
    return this->students;
}

void Faculty::addEmployee(Employee* employee) {
    this->employees.push_back(employee);
}

vector<Employee*> Faculty::getEmployees() {
    return this->employees;
}

void Faculty::printInfo() {
    cout << endl << " ---------------------" << endl;
    cout << "  Faculty: " << this->name << endl;
    cout << " ---------------------" << endl;

    cout << "Adress: " << this->adress.getAdress() << endl;

    cout << endl << "Employees:" << endl;
    for (auto& employee : this->employees) {
        employee->printInfo();
    }
    
    cout << endl << "Students:" << endl;
    for (auto& student : this->students) {
        student->printInfo();
    }
}