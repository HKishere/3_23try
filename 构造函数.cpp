#include <iostream>
#include <stdlib.h>
using namespace std;

class time {
public:
	time() {
		cout << "kishere" << endl;
	}
	time(int a) {
		cout << a << endl;
	}
private:
	int a;
};
int main() {
	time t2;
	system("pause");
	return 0;
}