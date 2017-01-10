# include<iostream>

using namespace std;

int max(int, int);

int main_1() {
	const float PI = 3.14;
	cout << "hello world" << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(bool) << endl;
	cout << PI << endl;
	printf("Hello, whao are you!!!\n");
	int rel;
	rel = max(4, 5);
	cout << rel << endl;
	return 0;
}

int max(int a, int b) {
	int c;
	if (a > b) {
		c = a;
	}
	else {
		c = b;
	}
	return c;
}