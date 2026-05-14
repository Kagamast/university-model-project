#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string name, string id) {
    this->name = name;
    this->id = id;
}

string Employee::getName() {
    return this->name;
}

string Employee::getId() {
    return this->id;
}

void Employee::printInfo() {
    cout << "- Name: " << this->name <<" (ID: " << this->id << ")" << endl;
}