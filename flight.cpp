//
// Created by Fernando Aguirre Higuera on 15/11/24.
//

#include "flight.h"
flight::flight() {

}
flight::~flight() {

}
void flight::setFromTo(string n_fromTo) {
    fromTo =n_fromTo;
}
void flight::setSeats(Passenger np) {
    seats.push_back(np);
}
void flight::setDate(string n_date) {
    date = n_date;
}
void flight::setHour(string n_hour) {
    hour = n_hour;
}
void flight::setPrice(int n_price) {
    price = n_price;
}
void flight::setAirplaneModel(string n_airplaneModel) {
    airplaneModel = n_airplaneModel;
}
void flight::setDistance(int n_distance) {
    distance = n_distance;
}
void flight::setCrew(int n_crew) {
     crew = n_crew;
}
void flight::setFuel(int n_fuel) {
    fuel = n_fuel;
}

