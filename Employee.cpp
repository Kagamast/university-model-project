#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string name, string id) : Person(name, id) {
    
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