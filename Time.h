#pragma once
#include "Header.h"
#include <string>
#include <iostream>
using namespace std;

class Time :
	public Object
{
public: Time(void);
public:
	virtual ~Time(void);
	void Show();
	Time(int, int, int);
	Time(const Time&);
	int get_hours() {return hours;}
	int get_minutes() { return minutes;}
	int get_secunds() { return secund;}
	void set_hours(int);
	void set_minutes(int);
	void set_secunds(int);
	Time& operator = (const Time&);
	friend istream& operator>>(istream&in, Time& c);
	friend ostream& operator<<(ostream&out, const Time& c);
protected:
	int hours;
	int minutes;
	int secund;

};