/*
Map/multimap里存放的是pair模板类对象，(first, second)
且，按照first从小到大排序

map中不允许存在两个具有形同first属性的成员变量

multimap中允许，相同first
*/

/*
关联容器

set, multiset, map, multimap

内部元素有序，新元素插入的位置取决于它的值，查找速度快

成员函数：

find，查找等于某个值得元素（等于：x<y, y<x同时不成立）
lower_bound，查找某个下界
upper_bound，上界
equal_range，同时查找上界下界
count，计算等于某个值得元素个数
insert，插入一个元素或区间
*/
