#ifndef Seat_H
#define Seat_H
#include <iostream>
using namespace std;

class Seat{
    private:
    string seat_number;
    string seat_type;
    bool is_available;

    public:
    Seat();
    Seat(string seat_number);
    string get_seat_number();
    string get_seat_type();
    bool get_is_available();
    void set_number(string seat_numebr);
    void set_seat_type(string seat_type);
    void set_is_available(bool is_available)；

};
#endif