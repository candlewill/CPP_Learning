#include<iostream>
#include<vector>

using namespace std;

/*
���캯����
vector()	�޲������캯����������ʼ��Ϊ��
vector(int n)	������ʼ����n��Ԫ��
vector(int n, const T & val)	Ԫ������T��n��Ԫ�أ�ÿ��Ԫ�ص�ֵ��val
vector(iterator first, iterator last)	�������������[first, last)��ͬ������

��Ա������
pop_back()	ɾ������ĩβԪ��
push_back(const T & val)	��val��ӵ�����ĩβ
size()	����Ԫ�ظ���
T & front()	���������е�һ��Ԫ�ص�����
T & back()	�������������һ��Ԫ�ص�Ӧ��
insert()	����

��λ��̬����
vector<vector<int>> v3
*/

void vector_print(const vector<int> &);

int main_11() {
	int i;
	int a[5] = { 1,2,3,4,5 };

	vector<int> v(5);

	cout << v.end() - v.begin() << endl;	// ������С

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