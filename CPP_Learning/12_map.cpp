/*
Map/multimap���ŵ���pairģ�������(first, second)
�ң�����first��С��������

map�в������������������ͬfirst���Եĳ�Ա����

multimap��������ͬfirst
*/

/*
��������

set, multiset, map, multimap

�ڲ�Ԫ��������Ԫ�ز����λ��ȡ��������ֵ�������ٶȿ�

��Ա������

find�����ҵ���ĳ��ֵ��Ԫ�أ����ڣ�x<y, y<xͬʱ��������
lower_bound������ĳ���½�
upper_bound���Ͻ�
equal_range��ͬʱ�����Ͻ��½�
count���������ĳ��ֵ��Ԫ�ظ���
insert������һ��Ԫ�ػ�����
*/

/*
Usage:

std::map <key_type, data_type, [comparison_function]>

Note: key_type has the less-than operator, <, defined

Example:

std::map <string, char> grade_list;

adding(update) keys to a map

grade_list["John"] = 'B';

grade_list["John"] = 'B';
// John's grade improves
grade_list["John"] = 'A';

erase

grade_list.erase("John");

how many values the map contains

std::cout<<"The class is size "<<grade_list.size()<<std::endl;

bool empty();

If you want guarantee that the map is empty, you can use the clear function. For instance:

grade_list.clear();

Find (Check wheter a key is exist)

std::map <string, char> grade_list;
grade_list["John"] = 'A';
if(grade_list.find("Tim") == grade_list.end())
{
std::cout<<"Tim is not in the map!"<<endl;
}

Iterators can also be used as a general means for accessing the data stored in a map; you can use the basic technique from before of getting an iterator:

std::map<parameters>::iterator iterator_name; 

For instance, the following sample shows the use of an iterator (pointing to the beginning of a map) to access the key and value.

std::map <string, char> grade_list;
grade_list["John"] = 'A';
// Should be John
std::cout<<grade_list.begin()->first<<endl;
// Should be A
std::cout<<grade_list.begin()->second<<endl;

Cost:

One issue to keep in mind is that insertion of a new key (and associated value) in a map, or lookup of the data associated with a key in a map, can take up to O(log(n)) time, where n is the size of the current map. This is potentially a bit slower than some hash tables with a good hashing function, and is due to the fact that the map keys are stored in sorted order for use by iterators.
*/