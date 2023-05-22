#ifndef Price_H
#define Pirce_H
#include <iostream>
#include "Flight.h"
using namespace std;

class Price: public Flight{
    private:
    string SeatType;
    double price;
 
    public:
    Price();
    Price(string SeatType,double price);
    double getPrice();
    string getSeatType();
    string getFlight();
    void setFilght(Flight flight);
    double setPrice(double price);
    string setSeatType(string SeatType);







};
#endif