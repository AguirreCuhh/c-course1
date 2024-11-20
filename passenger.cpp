//
// Created by Fernando Aguirre Higuera on 15/11/24.
//

#include "passenger.h"
Passenger::Passenger() {

}
Passenger::~Passenger() {

}
void Passenger::setName(string n_name) {
    name = n_name;
}
void Passenger::setPhone(string p_phone) {
    phone = p_phone;
}
string Passenger::getName() {
    return name;
}
string Passenger::getPhone() {
    return phone;
}
