#pragma once
#include <string>
using namespace std;

class Reservation
{
private:
	int code;
	string passenger;
	string flight;
	int resetvationDate;
	double reservationPrice;
public:
	Reservation(int code, string passenger, string flight, int reservationDate, double reservationPrice);
	void reservation();
	void calculateReservationPrice();

};

