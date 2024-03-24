//#include <iostream>
//#include<list>
//
//using namespace std;
//
//int main() {
//    list<int> lst;//定义一个list类型的容器名为lst
//
//    lst.push_back(10);//在尾部插入一个元素 类似尾插法
//    lst.push_front(20);//在头部插入一个元素 类似头插法
//
//    list<int>::iterator it;//构造一个迭代器
//    for (it = lst.begin(); it != lst.end(); it++)
//        cout << *it << " ";//20 10
//    cout << endl;
//    lst.pop_front();//删除首元素
//    for (it = lst.begin(); it != lst.end(); it++)
//        cout << *it << " ";//20
//    cout << endl;
//
//    return 0;
//}