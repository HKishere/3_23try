#include <iostream>
#include <vector>
using namespace std;

vector<char> tree;

void PrintFront(int pos) {
	unsigned int parent = pos;
	if (parent>=tree.size()){
		return;
	}
	unsigned int Lchild = parent * 2 + 1;
	if (Lchild>=tree.size()){
		return;
	}
	else {
		cout << tree[Lchild]<<endl;
	}	
	PrintFront(Lchild);
	unsigned int Rchild = Lchild + 1;
	if (Rchild >= tree.size()) {
		return;
	}
	else
	{
		cout << tree[Rchild] << endl;
	}
	PrintFront(Rchild);
}
void Print(vector<char> ChArr) {
	if (ChArr.size()>0){
		cout << ChArr[0]<<endl;
		PrintFront(0);
	}
	else
	{
		return;
	}
}


int main() {
	int num;
	cin >> num;
	for(int i = 0; i<num; ++i){
		char node;
		cin >> node;
		tree.push_back(node);
	}
	Print(tree);
	system("pause");
	return 0;
	
}