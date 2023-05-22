#ifndef Flight_H
#define Flight_H
#include <iostream>
#include "Seat.h"
using namespace std;

class Flight: public Seat{
    private:
    string flight_number;
    string departure_city;
    string departure_time;
    string arrival_city;
    string arrival_time;

    public:
    Flight();
    Flight(string flight_number);
    string get_flight_number();
    string get_departure_city();
    string get_departure_time();
    string get_arrival_city();
    string get_arrival_time();
    void set_flight_number(string flight_numebr);
    void set_departure_city(string departure_city);
    void set_departure_time(string departure_time);
    void set_arrival_city(string arrival_city);
    void set_arrival_time(string arrival_time);
    


};
#endif
