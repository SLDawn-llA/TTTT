#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int arr[] = {1,2,3,4,5};
	vector<int> v1(arr, arr + 5);//区间前开后闭
	
	for (int i = 0; i < 5; i++)
		cout << v1[i] << " ";
	cout << endl;
	vector<int> v2(3, 8);//存储3个8	
	for (int i = 0; i < 3; i++)
		cout << v2[i] << " ";
	cout << endl;
	vector<int> v3(v2);//拷贝构造函数 与v4的结果一样
	for (int i = 0; i < 3; i++)
		cout << v3[i] << " ";
	cout << endl;
	vector<int> v4 = v2;
	for (int i = 0; i < 3; i++)
		cout << v4[i] << " ";

	return 0;
}