#ifndef UserInterface_H
#define UserInterface_H
#include <iostream>
using namespace std;

class UserInterface{
    public:
    string inventoryManager;
    string searchResult;


    private:
    UserInterface();
    UserInterface(string inventoryManager, string searchResult);
    string searchFlight(string departure, string destination, string date);
    string bookFlight(Flight flight,string seatType,Customer passenger);



};
#endif