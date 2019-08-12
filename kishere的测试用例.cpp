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
	date a(2019,1,1);//实例化一个对象
	date b(a);//拷贝构造一个对象
	return 0;
}