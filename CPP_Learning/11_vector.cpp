#include<iostream>
#include<vector>

using namespace std;

/*
构造函数：
vector()	无参数构造函数，容器初始化为空
vector(int n)	容器初始化有n个元素
vector(int n, const T & val)	元素类型T，n个元素，每个元素的值是val
vector(iterator first, iterator last)	别的容易区间上[first, last)相同的内容

成员函数：
pop_back()	删除容器末尾元素
push_back(const T & val)	将val添加到容器末尾
size()	返回元素个数
T & front()	返回容器中第一个元素的引用
T & back()	返回容器中最后一个元素的应用
insert()	插入

二位动态数组
vector<vector<int>> v3
*/

void vector_print(const vector<int> &);

int main_11() {
	int i;
	int a[5] = { 1,2,3,4,5 };

	vector<int> v(5);

	cout << v.end() - v.begin() << endl;	// 容器大小

	for (i = 0; i < v.size(); i++) {
		v[i] = i;
	}

	vector_print(v);

	v.at(4) = 100;

	vector_print(v);

	vector<int> v2(a, a + 4);

	vector_print(v2);

	v2.insert(v2.begin() + 3, 100);

	vector_print(v2);

	vector<vector<int>> v3(3);

	for (int i = 0; i < v3.size(); i++) {
		for (int j = 0; j < 4; j++) {
			v3[i].push_back(j);
		}
	}

	for (int i = 0; i < v3.size(); i++) {
		vector_print(v3[i]);
	}

	return 0;
}

void vector_print(const vector<int> & v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}