#include<iostream>

using namespace std;

void get_second(unsigned long*);
double mean(int*, int);

int main_5() {
	unsigned long sec;
	get_second(&sec);
	cout << sec << endl;

	int arr[] = { 43,434,546,56543,4354,6565,654545,45456557,5454,545 };
	double avg;
	avg = mean(arr, 10);
	cout << avg << endl;

	return 0;
}

void get_second(unsigned long* sec) {
	*sec = 545415415;
	return;
}

double mean(int* p, int len) {
	int sum=0;
	for (int i = 0; i < len; i++) {
		sum += p[i];
	}
	return double(sum) / len;
}