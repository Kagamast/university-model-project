#include "University.h"

string University::name = "";

void University::setName(string name) {
    University::name = name;
}

string University::getName() {
    return University::name;
}

vector<Division*> University::divisions;

void University::addDivision(Division* division) {
    University::divisions.push_back(division);
}

void University::printInfo() {
    cout << endl << "-+----------------------------+-" << endl;
    cout << "   University: " << University::name;
    cout << endl << "-+----------------------------+-" << endl;
    cout << endl << "Divisions: " << endl << endl;
    for (auto& division : University::divisions) {
        division->printInfo();
        cout << endl;
    }
}