#pragma once
#include <string>
using namespace std;

#include "Employee.h"

class Subject {
    private:
        string name;
        Employee teacher;
        int grade = 0;
    public:
        Subject(string name, Employee teacher);
        string getName();
        Employee getTeacher();
        int getGrade();
        void incGrade(int amount);
        bool canPass();
};