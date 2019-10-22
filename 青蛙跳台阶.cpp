#include <iostream>
using namespace std;

int Jump_whit_2_step(int step) {
	if (step == 1){
		return 1;
	}
	if (step == 2){
		return 2;
	}
	return Jump_whit_2_step(step - 1) + Jump_whit_2_step(step - 2);
}
int main() {
	int step;
	cin >> step;
	int ret = Jump_whit_2_step(step);
	cout << ret << endl;
	system("pause");
	return 0;
}
