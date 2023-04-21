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