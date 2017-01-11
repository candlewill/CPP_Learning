/*
顺序容器和关联容器中都有的成员函数：

begin，容器中第一个元素的迭代器
end，容器中最后一个元素【后面】的迭代器
rbegin，容器中最后一个元素的迭代器
rend，容器中第一个元素【前面】的迭代器
erase，从容器中删除一个或几个元素
clear，从容器中删除全部元素
*/

/*
顺序容器中常用的成员函数

front，返回容器中第一个元素的引用
back，返回容器中最后一个元素的引用
push_back，在容器末尾添加新的元素
pop_back，删除容器末尾元素
erase，删除某一个迭代器所指向的元素（可能会使该迭代器失效），或删除一个空间，返回被删除元素后面的那个元素的迭代器
*/

/*
迭代器

用于指向顺序和关联容器中的元素
有const和非const两种

定义：

容器类名::iterator 变量名；

容器类名::reverse_iterator 变量名;	<----- 反向迭代器

容器类名::const_iterator 变量名;


访问迭代器指向的元素：

* 迭代器名

操作：

++	下一个
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