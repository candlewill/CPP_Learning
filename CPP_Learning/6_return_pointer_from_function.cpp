#include<iostream>

using namespace std;
int* get_random(int);

int main_x() {
	int* p;
	int num = 10;
	p = get_random(num);
	for (int i = 0; i < num; i++) {
		cout << p[i] << endl;
	}

	return 0;
}

int* get_random(int num) {
	/* Wrong!!! 需要使用动态数组
	int r[num];*/
	int* p = new int[num];
	for (int i = 0; i < num; i++) {
		p[i] = rand();
	}
	return p;

}