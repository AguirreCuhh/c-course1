//
// Created by Fernando Aguirre Higuera on 15/11/24.
//

#include "airline.h"
airline::airline() {

}
airline::~airline() {

}
void airline::setBoardingCity(string n_city) {
    boardingCity = n_city;
}
void airline::setShortName(string n_shortName) {
    shortName = n_shortName;
}
void airline::setIncomes(int n_incomes){
    incomes = n_incomes;
}
void airline::setFlights(vector<string> n_flights) {
    flights = n_flights;
}
