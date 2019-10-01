/*
链接：https://www.nowcoder.com/questionTerminal/95e35e7f6ad34821bc2958e37c08918b
来源：牛客网

NowCoder每天要给很多人发邮件。有一天他发现发错了邮件，把发给A的邮件发给了B，把发给B的邮件发给了A。于是他就思考，要给n个人发邮件，在每个人仅收到1封邮件的情况下，有多少种情况是所有人都收到了错误的邮件？
即没有人收到属于自己的邮件。
注意所数据长度

*/
//#include <iostream>
//using namespace std;
//
//long long Send(int num_of_email) {
//	if (num_of_email == 2) {
//		return 1;
//	}
//	if (num_of_email == 1) {
//		return 0;
//	}
//	else
//		return (num_of_email - 1) * (Send(num_of_email - 1) + Send(num_of_email - 2));
//}
//
//
//int main() {
//	int num_of_people;
//	while (cin >> num_of_people) {
//		cout << Send(num_of_people) << endl;
//	}
//	return 0;
//}
