#include <iostream>
using namespace std;

#include "Rectorate.h"

Rectorate::Rectorate(Adress adress) : Division(adress) {
}

Adress Rectorate::getAdress() {
    return adress;
}

void Rectorate::addEmployee(Employee* employee) {
    this->employees.push_back(employee);
}

vector<Employee*> Rectorate::getEmployees() {
    return this->employees;
}

void Rectorate::printInfo() {
    cout << endl << " ---------------------" << endl;
    cout << "  Rectorate";
    cout << endl << " ---------------------" << endl;

    cout << "Adress: " << adress.getAdress() << endl;
    cout << endl << "Employees:" << endl;
    for (auto& employee : this->employees) {
        employee->printInfo();
    }
}