#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

#include "Division.h"

class University {
private:
    static vector<class Division*> divisions;
    static string name;
public:
    static void setName(string name);
    static string getName();
    static void addDivision(Division* division);
    static void printInfo();
};