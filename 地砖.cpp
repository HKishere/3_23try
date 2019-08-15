#include <iostream>
using namespace std;

class floor_of_house {
public:
	int x, y;
	void get_row_and_col() {
		while (1) {
			cin >> col;
			cin >> row;
			if (col <= 20 && row <= 20) {
				break;
			}
		}
	}
	void get_floor_map() {
		memset(map_of_floor,'#',900);
		int i, j;
		for (i = 1; i <= col; ++i) {
			for (j = 1; j <= row; ++j) {
				cin >> map_of_floor[i][j];
			}
		}
	}
	void find_loc() {
		int i, j;
		x = 1;
		y = 1;
		for (i = 1; i <= col; ++i) {
			for (j = 1; j <= row; ++j) {
				if (map_of_floor[i][j] == '@'){
					x = i;
					y = j;
				}
			}
		}
	}
	int count_map(int x, int y) {
		if (map_of_floor[x][y] == '#'){
			return 0;
		}
		else {
			map_of_floor[x][y] = '#';
			return 1 + count_map(x + 1, y) + count_map(x - 1, y) + count_map(x, y + 1) + count_map(x, y - 1);
		}
	}

private:
	int col;
	int row;
	char map_of_floor[30][30];
};


int main() {
	int ret;
	while (1) {
		floor_of_house a;
		a.get_row_and_col();
		a.get_floor_map();
		a.find_loc();
		ret = a.count_map(a.x, a.y);
		cout << ret;
	}
	return 0;

}