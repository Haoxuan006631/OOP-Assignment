#ifndef Customer_H
#define Customer_H
#include <iostream>
#include "Reservation.h"
using namespace std;

class Customer: public Reservation{
    private:
    string FirstName;
    string MidName;
    string DateBirth;
    string Nationality;
    string PhoneNum;
    string EmailAddress;
    string AirMembership;
    
    public:
    Customer();
    Customer(string FirstName,string MidName,string DateBirth,string Nationality,string PhoneNum,String EmailAddress,string AirMembership);
    string getName();
    string getDateOfBirth();
    string getNationality();
    string getPhoneNumber();
    string getEmail();
    string getAirlineMembership();
    Reservation getReservation();
    void setName(string name);
    void setDateOfBirth(string DateBirth);
    void setPhoneNumber(string PhoneNum);
    void setEmail(string EmailAddress);
    void setAirlineMembership(string airline);
    void setReservation(Reservation reservation);
    void displayCustomerInfo();


};
#endif

