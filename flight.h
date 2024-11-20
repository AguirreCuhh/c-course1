//
// Created by Fernando Aguirre Higuera on 15/11/24.
//

#ifndef FLIGHT_H
#define FLIGHT_H
#include <iostream>
#include <vector>
#include "Passenger.h"
using namespace std;

class flight {
private:
    string fromTo;
    vector <Passenger> seats;
    string date;
    string hour;
    int price;
    string airplaneModel;
    int distance;
    int crew;
    int fuel;

public:
    flight();
    ~flight();
    void setFromTo(string);
    string getFromTo();

    void setSeats(Passenger);
    Passenger getSeats();

    void setDate(string);
    string getDate();

    void setHour(string);
    string getHour();

    void setPrice(int);
    int getPrice();

    void setAirplaneModel(string);
    string getAirplaneModel();

    void setDistance(int);
    int getDistance();

    void setCrew(int);
    int getCrew();

    void setFuel(int);
    int getFuel();
};



#endif //FLIGHT_H
