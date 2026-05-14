#pragma once
#include <string>
using namespace std;

#include "Person.h"

class Employee : public Person {
    private:
        string name;
        string id;
    public:
        Employee(string name, string id);
        string getName();
        string getId();

        void printInfo();
};