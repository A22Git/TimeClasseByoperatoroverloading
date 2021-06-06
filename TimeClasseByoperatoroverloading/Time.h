
#include <iostream>
#include <string>

class Time {
public:
	Time() { hour = 0; minutes = 0; }
	Time(int r, int i) { hour = r; minutes = i; };
	Time operator+(const Time& c) const;
	operator std::string();
	friend std::istream& operator>>(std::istream& in, Time& c);
	friend std::ostream& operator<<(std::ostream& out, const Time& c);
	friend class Data;
	friend bool operator==(Time& t1, Time& t2);
	friend bool operator<(Time& t1, Time& t2);

private:
	int hour;
	int minutes;
};
