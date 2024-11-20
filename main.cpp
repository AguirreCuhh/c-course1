//#include "airport.cpp"
#include <iostream>
#include <vector>

#include "passenger.cpp"
using namespace std;
int main(int argc, const char * argv []) {
    vector<Passenger> seat;
    vector<Passenger>::iterator seat_it;
    Passenger Aguirre;
    Aguirre.setName("Aguirre");
    Aguirre.setPhone("5536559473");
    Passenger Maria;
    Maria.setName("Maria");
    Maria.setPhone("5521291195");
    seat.push_back(Aguirre);
    seat.push_back(Maria);
    for (seat_it =seat.begin(); seat_it!=seat.end(); seat_it++) {
        cout<<"Pasajero asiento: "<<seat_it->getName()<<endl;
    }
    return 0;
}