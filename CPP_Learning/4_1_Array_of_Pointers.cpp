#include<iostream>

using namespace std;

const int MAX = 3;

int main_4_1() {
	
	int var[MAX] = { 120,43,323 };

	int* ptr[MAX];
	// set value for ptr
	for (int i = 0; i < MAX; i++) {
		ptr[i] = &var[i];
	}

	// output ptr
	for (int i = 0; i < MAX; i++) {
		cout << *ptr[i] << endl;
	}

	// use an array of pointers to character to store a list of strings 
	char* names[MAX] = {
		"NI Hao",
		"我们",
		"很好",
	};
	for (int i = 0; i < MAX; i++) {
		cout << names[i] << endl;
	}
	
	char* char_p;
	char_p = "我们都是中国人";
	cout << char_p << endl;
	char_p = "真的";
	cout << char_p << endl;
	
	char char_array[] = "我们都是中国人";
	cout << char_array << endl;
	
	/*	wrong
	char_array = "f";
	*/
	return 0;
}