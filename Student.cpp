#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string name, string id) : Person(name, id) {
    
}

string Student::getName() {
    return this->name;
}

string Student::getId() {
    return this->id;
}

void Student::addSubject(Subject subject) {
    this->subjects.push_back(subject);
}

vector<Subject> Student::getSubjects() {
    return this->subjects;
}

bool Student::canPass() {
    for (auto& subject : this->subjects) {
        if (!subject.canPass()) {
            return false;
        }
    }
    return true;
}

void Student::incGrade(string subjectName, int amount) {
    for (auto& subject : this->subjects) {
        if (subject.getName() == subjectName) {
            subject.incGrade(amount);
            return;
        }
    }
}

void Student::printInfo() {
    cout << "- Name: " << this->name <<" (ID: " << this->id << ")" << endl;
    cout << " Subjects:" << endl;
    for (auto& subject : this->subjects) {
        cout << " - " << subject.getName() << ": " << subject.getGrade() << " (" << (subject.canPass() ? "Pass" : "Fail") << ")" << endl;
    }
}