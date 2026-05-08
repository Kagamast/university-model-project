#include "Subject.h"
#include <iostream>
using namespace std;


Subject::Subject(string name, Employee teacher) : teacher(teacher) {
    this->name = name;
}

string Subject::getName() {
    return this->name;
}

Employee Subject::getTeacher() {
    return this->teacher;
}

int Subject::getGrade() {
    return this->grade;
}

void Subject::incGrade(int amount) {
    if(this->grade + amount <= 100) {
        this->grade += amount;
    } else {
        this->grade = 100;
    }
}

bool Subject::canPass() {
    return this->grade > 50;
}