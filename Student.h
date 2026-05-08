#pragma once
#include <string>
#include <vector>
using namespace std;

#include "Person.h"
#include "Subject.h"

class Student : public Person {
        vector<Subject> subjects;
    public:
        Student(string name, string id);
        string getName();
        string getId();

        void addSubject(Subject subject);
        vector<Subject> getSubjects();
        bool canPass();
        void incGrade(string subjectName, int amount);
        
        void printInfo();
};