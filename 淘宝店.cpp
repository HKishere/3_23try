#include<iostream>
using namespace std;


class Date {
public:
	Date(int year = 1970, int month = 1, int day = 1) {
		_year = year;
		_month = month;
		_day = day;
		loopyearflag = 0;
		date_from_zreo = 0;
		getdate();
		ifloopyear();
	}
	void ifloopyear() {
		if ((_year % 4 == 0 && _year % 100 != 0) || _year % 400 == 0) {
			loopyearflag = 1;
		}
	}
	int getdate() {
		switch (_month)
		{
		case 1:date_from_zreo = 0 + _day;
			break;
		case 2:date_from_zreo = 31 + _day;
			break;
		case 3:date_from_zreo = 59 + _day + loopyearflag;
			break;
		case 4:date_from_zreo = 90 + _day + loopyearflag;
			break;
		case 5:date_from_zreo = 120 + _day + loopyearflag;
			break;
		case 6:date_from_zreo = 151 + _day + loopyearflag;
			break;
		case 7:date_from_zreo = 181 + _day + loopyearflag;
			break;
		case 8:date_from_zreo = 212 + _day + loopyearflag;
			break;
		case 9:date_from_zreo = 243 + _day + loopyearflag;
			break;
		case 10:date_from_zreo = 273 + _day + loopyearflag;
			break;
		case 11:date_from_zreo = 304 + _day + loopyearflag;
			break;
		case 12:date_from_zreo = 334 + _day + loopyearflag;
			break;
		default:
			break;
		}
		int allloopyear;
		allloopyear = (_year - 1) / 4 - (_year - 1) / 100 + (_year - 1) / 400;
		date_from_zreo = _year * 365 + allloopyear + date_from_zreo;
	}

private:	
	int _year;
	int _month;
	int _day;
	int loopyearflag;
	int date_from_zreo;
};


int main() {
	return 0;
}