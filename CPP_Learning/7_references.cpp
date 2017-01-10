#include<iostream>

using namespace std;

int main_7() {
	int a = 98;
	int& a_refer = a;

	cout << a << endl;
	cout << a_refer << endl;
	
	a += 100;
	
	cout << a << endl;
	cout << a_refer << endl;

	a_refer += 100;

	cout << a << endl;
	cout << a_refer << endl;

	return 0;
}