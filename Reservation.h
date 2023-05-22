#ifndef Reservation_H
#define Reservation_H
#include <iostream>
using namespace std;

class Reservation{
    private:
    string reservation_number;
    string flight_number;
    string seat_number;
    int baggage_allowance;
    string contact_info;
    string passenger_name;

    public:
    Reservation();
    Reservation(string reservation_number,string flight_Number,string seat_number,int baggage_allowance,string contact_info,string passenger_name);
    string get_reservation_number();
    string get_flight_number();
    string get_seat_number();
    int get_baggage_allowance();
    string get_contact_info();
    string get_passenger_name();
    void set_reservation_number(string reservation_number);
    void set_flight_number(string seat_number);
    void set_baggage_allowance(int baggage_allowance);
    void set_contact_info(string contact_info);
    void set_passenger_name(string passenger_name);
};
#endif