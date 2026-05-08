#include "Division.h"
#include "Adress.h"

#include <iostream>
using namespace std;

Division::Division(Adress adress) : adress(adress) {}

Adress Division::getAdress() {
    return this->adress;
}