////#include<iostream>
////#include<algorithm>
////#include<cstdio>
////#include<vector>
////using namespace std;
////
////void get_permutation(vector<int>& a)
////{
////    do
////    {
////        for (int i = 0; i < a.size(); i++)
////        {
////            cout << a[i];
////            if (i < 7)
////                cout << ' ';
////            else
////                cout << '/n';
////        }
////    } while (next_permutation(a.begin(), a.end()));
////}
////int main()
////{
////    vector<int> a = { 1,2,3,4,5,6,7,8 };
////    get_permutation(a);
////    return 0;
////}]
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<cstdio>
//using namespace std;
//
//void getpermutation(vector<int>& b,int n)
//{
//	do {
//		for (int i = 0; i < b.size(); i++)
//		{
//			cout << b[i];
//			if (i < n-1)
//				cout << "     ";
//			else
//				cout << "\n";
//		}
//	} while (next_permutation(b.begin(), b.end()));
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	int a[9];
//	
//	for (int i = 1; i <= n; i++)
//	{
//		a[i] = i;
//	}vector<int>b (a+1,a+n+1);//最后一个元素后面的位置
//	getpermutation(b,n);
//
//	return 0;
//}/*#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<vector>
//using namespace std;
//
//void getPermutation(vector<int>& a)
//{
//	do
//	{
//		for (int i = 0; i < a.size(); i++)
//		{
//			cout << a[i];
//			if (i < 2)
//				cout << " ";
//			else
//				cout << "\n";
//		}
//	} while (next_permutation(a.begin(), a.end()));
//}
//int main()
//{
//	vector<int> a = { 1,2,3 };
//	getPermutation(a);
//	return 0;
//}*/