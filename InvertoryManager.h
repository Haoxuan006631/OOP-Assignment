#ifndef InventoryManager_H
#define InvertoryManager_H
#include <iostream>
#include "Flight.h"
using namespace std;

class InventoryManager: public Flight{
    public:
    InventoryManager();
    string getFlights();
    void setFlights(Flight flight);
    void addFlight(Flight flight);
    void removeFlight(Flight flight);
    void modifyFlightNumber(Flight flight,string seatType, int newAvailableSeats);
    void modifyPassengerInfo(Reservation reservation, string name, string contactInfo, string seatNumber,string flightNumber);

};
#endif
