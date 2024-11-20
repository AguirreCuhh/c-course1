//
// Created by Fernando Aguirre Higuera on 15/11/24.
//

#include "airport.h"
airport::airport() {

}
airport::~airport() {

}
void airport::set_id(string n_id) {
    id = n_id;
}
void airport::set_date(string n_date) {
    date = n_date;
}
void airport::set_city(string n_city) {
    city = n_city;
}
void airport::set_country(string n_country) {
    country = n_country;
}
void airport::set_totalTransactions(int n_totalTransactions) {
    totalTransactions = n_totalTransactions;
}
void airport::set_totalDailyIncomes(int n_totalDailyIncomes) {
    totalDailyIncomes = n_totalDailyIncomes;
}


