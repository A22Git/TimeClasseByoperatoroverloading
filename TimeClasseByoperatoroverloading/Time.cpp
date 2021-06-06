#include "Time.h"
#include <sstream>
std::ostream& operator<<(std::ostream& out, const Time& c)
{
	out << c.hour;
	out << ':' << c.minutes ;

	return out;
}

std::istream& operator>>(std::istream& in, Time& c)
{
	int re, im;
	char sign;
	in >> re >> sign >> im;
	c.hour = re;
	c.minutes = im;

	return in;
}

bool operator== (Time& t1, Time& t2)
{
	return (t1.hour == t2.hour && t1.minutes == t2.hour);
}
bool operator<(Time& t1, Time& t2)
{
	return(t1.hour < t2.hour || t1.hour == t2.hour && t1.minutes < t2.minutes);
}

Time Time::operator+(const Time& t1) const
{
	Time t;
	int b;
	b = minutes + t1.minutes;
	t.minutes = b % 60;
	t.hour = (b / 60) + hour + t1.hour;
	t.hour = t.hour % 12;
	return (t);
}

Time ::operator std::string()
{
	std::string timeString = std::to_string(hour);
	timeString = timeString + ":" + std::to_string(minutes);
	return timeString;
}


