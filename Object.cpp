#include "Time.h"
Time::Time(void) 
{
	hours = 0;
	minutes = 0;
	secund = 0;
}
Time::~Time(void)
{}
Time::Time(int H, int M, int C)
{
	hours = H;
	minutes = M;
	secund = C;
}
Time::Time(const Time& time)
{
	hours = time.hours;
	minutes = time.minutes;
	secund = time.secund;
}
void Time::set_hours(int H) 
{
	hours = H;
}
void Time::set_minutes(int M)
{
	hours = M;
}
void Time::set_secunds(int C)
{
	hours = C;
}
Time& Time::operator=(const Time& c)
{
	if (&c == this)return *this;
	hours = c.hours;
	minutes = c.minutes;
	secund = c.secund;
	return *this;
}
istream& operator >>(istream& in, Time& c)
{
	cout << "Hours: "; in >> c.hours;
	cout << "Minutes: "; in >> c.minutes;
	cout << "Secunds: "; in >> c.secund;
	return in;
}
ostream& operator <<(ostream& out, const Time& c)
{
	out << "\nHOURS: " << c.hours;
	out << "\nMINUTES: " << c.minutes;
	out << "\nSECUNDS: " << c.secund;
	out << "\n";
	return out;
}
void Time::Show() 
{
	cout << "\nHOURS: " << hours;
	cout << "\nMINUTES: " << minutes;
	cout << "\nSECUNDS: " << secund;
	cout << "\n";
}
