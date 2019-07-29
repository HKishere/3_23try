#include <iostream>
using namespace std;

class Root_Of_Num {
public:
	int func(int source) {
		root = 0;
		while (source > 0) {
			int ret = 0;
			ret += source % 10;
			source = source / 10;
			root += ret;
		}
		if (root >= 10) {
			return func(root);
		}
		else
		{
			return root;
		}
	}
private:
	int root = 0;
};

int main() {
	int num;
	cin >> num;
	Root_Of_Num a;
	cout << a.func(num) << endl;
	system("pause");
	return 0;
}
