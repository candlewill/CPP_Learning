#include<iostream>

using namespace std;

void my_swap(int&, int&);

int main_7_1() {
	int a = 56, b = 90;
	cout << "a=" << a << ", b=" << b << endl;
	my_swap(a, b);
	cout << "a=" << a << ", b=" << b << endl;
	return 0;
}

void my_swap(int & a, int & b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	return;
}