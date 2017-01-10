#include<iostream>

using namespace std;

int main_4() {
	int var1;
	char var2[10];

	var1 = 10;
	cout << "Address of var1: " << &var1 << endl;
	cout << "Addrees of var2: " << &var2 << endl;

	int* p;
	p = &var1;
	cout << "adress:" << p << endl;

	cout << "value:" << *p << endl;


	// 递增一个指针
	const int MAX = 3;
	int var[MAX] = { 23,34,3342 };

	p = var;
	for (int i = 0; i < MAX; i++) {
		cout << "The Address of var[" << i << "] is:" << p << endl;
		cout << "The value is: " << *p << endl;
		p++;
	}
	return 0;
}