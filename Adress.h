#pragma once
#include <string>

using namespace std;

class Adress {
    private:
        string city;
        string street;
        string houseNumber;
        int postCode;
    public:
        Adress(string city, string street, int postCode);
        Adress(string city, string street, string houseNumber, int postCode);

        string getAdress();
        string getCity();
        string getStreet();
        string getHouseNumber();
        int getPostCode();
};