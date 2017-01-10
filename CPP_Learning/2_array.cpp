# include <iostream>
#include<iomanip>
using namespace std;
using std::setw;

int main_2() {
	int a[10] = { 1,2,3,2,1,55,44,33,22,1 };
	for (int i = 0; i <= 9; i++) {
		cout << "The value of a: " << a[i] << endl;
	}

	int n[10];
	for (int i = 0; i < 10; i++) {
		n[i] = i + 200;
	}
	cout << "Element" << setw(13) << "Value" << endl;

	for (int i = 0; i < 10; i++) {
		cout << setw(7) << i << setw(13) << n[i] << endl;
	}
	return 0;
}