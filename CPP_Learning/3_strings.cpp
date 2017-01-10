#include<iostream>
#include<string>

using namespace std;

int main_3() {
	char s[] = "Hello£¨ ¿ΩÁ£°";
	cout << s << endl;

	string str1, str2, str3;
	str1 = "Hello";
	str2 = "World";
	
	// copy str1 to str3
	str3 = str1;
	cout << str3 << endl;

	// concatenate str1 and str2
	str3 = str1 + str2;
	cout << str3 << endl;

	// string length
	int len;
	len = str3.size();
	cout << len << endl;

	return 0;
}