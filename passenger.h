//
// Created by Fernando Aguirre Higuera on 15/11/24.
//

#ifndef PASSENGER_H
#define PASSENGER_H
#include <iostream>
#include <string>
using namespace std;


class Passenger {
private:
    string name;
    string phone;
public:
    Passenger();
    ~Passenger();
    void setName(string n_name);
    void setPhone(string n_phone);
    string getName();
    string getPhone();
};



#endif //PASSENGER_H
