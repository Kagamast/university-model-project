#pragma once
#include <string>
using namespace std;

class Person {
    protected:
        string name;
        string id;
    public:
        Person(string name, string id);
        virtual string getName() = 0;
        virtual string getId() = 0;

        virtual void printInfo() = 0;
};