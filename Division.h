#pragma once

#include "Adress.h"
#include "Employee.h"

#include <string>
#include <vector>
using namespace std;

class Division {
    private:
    protected:
        Adress adress;
        vector<Employee*> employees;

        /*  
        vector<Employee> employees;
        vector<Student> students;
        */
    public:
        Division(Adress adress);
        virtual Adress getAdress();
        
        virtual void printInfo() = 0;
};