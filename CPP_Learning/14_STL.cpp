/*
˳�������͹��������ж��еĳ�Ա������

begin�������е�һ��Ԫ�صĵ�����
end�����������һ��Ԫ�ء����桿�ĵ�����
rbegin�����������һ��Ԫ�صĵ�����
rend�������е�һ��Ԫ�ء�ǰ�桿�ĵ�����
erase����������ɾ��һ���򼸸�Ԫ��
clear����������ɾ��ȫ��Ԫ��
*/

/*
˳�������г��õĳ�Ա����

front�����������е�һ��Ԫ�ص�����
back���������������һ��Ԫ�ص�����
push_back��������ĩβ����µ�Ԫ��
pop_back��ɾ������ĩβԪ��
erase��ɾ��ĳһ����������ָ���Ԫ�أ����ܻ�ʹ�õ�����ʧЧ������ɾ��һ���ռ䣬���ر�ɾ��Ԫ�غ�����Ǹ�Ԫ�صĵ�����
*/

/*
������

����ָ��˳��͹��������е�Ԫ��
��const�ͷ�const����

���壺

��������::iterator ��������

��������::reverse_iterator ������;	<----- ���������

��������::const_iterator ������;


���ʵ�����ָ���Ԫ�أ�

* ��������

������

++	��һ��
*/

#include <iostream>
#include <vector>

using namespace std;

int main_14() {
	vector<int> v;
	v.push_back(12);
	v.push_back(43);
	v.push_back(12);
	v.push_back(454);

	vector<int>::iterator i;
	for (i = v.begin(); i != v.end(); i++) {
		cout << *i << endl;
	}

	vector<int>::reverse_iterator r;
	for (r = v.rbegin(); r != v.rend(); r++) {
		cout << *r << endl;
	}

	return 0;

}