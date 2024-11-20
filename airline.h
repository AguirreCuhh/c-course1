//
// Created by Fernando Aguirre Higuera on 15/11/24.
//

#ifndef AIRLINE_H
#define AIRLINE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class airline {
    private:
    string boardingCity;
    string shortName;
    int incomes;
    vector <string> flights ;
public:
    airline();
    ~airline();
    void setBoardingCity(string boardingCity);
    string getBoardingCity();

    void setShortName(string shortName);
    string getShortName();

    void setIncomes(int incomes);
    int getIncomes();

    void setFlights(vector <string> flights);
    vector <string> getFlights();


};



#endif //AIRLINE_H
