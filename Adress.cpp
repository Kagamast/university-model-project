#include "Adress.h"

Adress::Adress(string city, string street, string houseNumber, int postCode) {
    this->city = city;
    this->street = street;
    this->houseNumber = houseNumber;
    this->postCode = postCode;
}
Adress::Adress(string city, string street, int postCode) : Adress(city, street, "", postCode) {}

string Adress::getAdress() {
    return this->city + ", " + this->street + " " + this->houseNumber + ", " + to_string(this->postCode);
}
string Adress::getCity() {
    return this->city;
}
string Adress::getStreet() {
    return this->street;
}
string Adress::getHouseNumber() {
    return this->houseNumber;
}
int Adress::getPostCode() {
    return this->postCode;
}
