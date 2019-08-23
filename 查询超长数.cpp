#include <iostream>
#include <vector>
using namespace std;

class solution
{
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		int lenth_of_all = numbers.size();
		int max_len = 0;
		int max_len_num = 0;
		vector<int> member;
		for (unsigned int i = 0; i < numbers.size(); ++i) {
			member.push_back(numbers[i]);
			for (unsigned int j = 0;(j + 1) < member.size(); ++j) {
				if (member.size() == 0){
					member.push_back(numbers[i]);
				}
				if (numbers[i] == member[j]) {
					member.pop_back();
					break;
				}
			}
		}
		for (unsigned int i = 0; i < member.size(); ++i) {
			int count = 0;
			for (unsigned int j = 0; j < numbers.size(); ++j) {
				if (numbers[j] == (member[i])){
					count++;
				}
			}
			if (count > max_len) {
				max_len = count;
				max_len_num = member[i];
			}
		}
		if (max_len > (lenth_of_all / 2)){
			return max_len_num;
		}
		return 0;
    }
protected:
private:
};

int main6 (){
	vector<int>num;
	num.push_back(1);
	num.push_back(2);
	num.push_back(3);
	num.push_back(2);
	num.push_back(2);
	num.push_back(2);
	num.push_back(5);
	num.push_back(4);
	num.push_back(2);
	solution a;
	cout << a.MoreThanHalfNum_Solution(num);
	
	system("pause");
	return 0;
}