#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

string A, B; 

void judge(string s1,string s2) {
	 int a[26] = { 0 };//����,��a[0]��ʾA,a[1]��ʾB
	 int b[26] = { 0 };
	 for (unsigned int i = 0; i < A.length(); ++i) {
		 ++a[(int)A[i] - 65];//�����ַ���,����������Ӧ����������1
	 }
	 for (unsigned int i = 0; i < B.length(); ++i) {
		 ++b[(int)B[i] - 65];
	 }
	 for (int i = 0; i < 26; ++i) {
		 if (b[i]>a[i]){
			 cout << "No" << endl;//�Ա���������,���B�еı�A�еĴ�,֤������������
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