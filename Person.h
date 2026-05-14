#pragma once
#include <string>
using namespace std;

class Person {
    public:
        Person();
        virtual string getName() = 0;
        virtual string getId() = 0;

        virtual void printInfo() = 0;
};