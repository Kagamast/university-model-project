#pragma once
#include <string>
#include <vector>
using namespace std;

#include "Division.h"

class Rectorate : public Division {
public:
    Rectorate(Adress adress);
    Adress getAdress();
    void printInfo();

    void addEmployee(Employee* employee);
    vector<Employee*> getEmployees();
};