#pragma once
#include <string>
using namespace std;

#include "Division.h"
#include "Student.h"
#include "Employee.h"

class Faculty : public Division {
    private:
        string name;
        vector<Student*> students;
        // vector<Employee*> employees;
    public:
        Faculty(string name, Adress adress);
        string getName();
        Adress getAdress();

        void addStudent(Student* student);
        vector<Student*> getStudents();

        void addEmployee(Employee* employee);
        vector<Employee*> getEmployees();

        void printInfo();
};