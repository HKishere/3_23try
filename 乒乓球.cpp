#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

string A, B; 

void judge(string s1,string s2) {
	 int a[26] = { 0 };//计数,用a[0]表示A,a[1]表示B
	 int b[26] = { 0 };
	 for (unsigned int i = 0; i < A.length(); ++i) {
		 ++a[(int)A[i] - 65];//遍历字符串,将数组中相应的数据增加1
	 }
	 for (unsigned int i = 0; i < B.length(); ++i) {
		 ++b[(int)B[i] - 65];
	 }
	 for (int i = 0; i < 26; ++i) {
		 if (b[i]>a[i]){
			 cout << "No" << endl;//对比两个数组,如果B中的比A中的大,证明不满足条件
			 return;
		 }
	 }
	 cout << "Yes" << endl;
	 return;
}

 int main4 (){
	 while (cin >> A >> B)
		 judge(A, B);
	return 0;
}