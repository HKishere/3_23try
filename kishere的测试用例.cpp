#include<iostream>
using namespace std;

class date {
public:
	date(int year, int month, int day) {
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};


int main() {
	date a(2019,1,1);
	date b(a);
	return 0;
}