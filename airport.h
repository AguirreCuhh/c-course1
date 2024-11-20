//
// Created by Fernando Aguirre Higuera on 15/11/24.
//

#ifndef AIRPORT_H
#define AIRPORT_H
#include <vector>
#include <string>
#include <iostream>
using namespace std;


class airport {
private:
    string id;
    string date;
    string city;
    string country;
    int totalTransactions;
    int totalDailyIncomes;
    vector<int> airlines;
public:
    airport();
    ~airport();
    void set_id(string id);
    string get_id();

    void set_date(string date);
    string get_date();

    void set_city(string city);
    string get_city();

    void set_country(string country);
    string get_country();

    void set_totalTransactions(int totalTransactions);
    int get_totalTransactions();

    void set_totalDailyIncomes(int totalDailyIncomes);
    int get_totalDailyIncomes();
};



#endif //AIRPORT_H
