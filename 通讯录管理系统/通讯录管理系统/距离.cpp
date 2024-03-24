////#include<cstdio>
////#include<cmath>
////using namespace std;
////double sq(double x)
////{
////    return x * x;
////}
////double dis(double x1, double y1, double x2, double y2)
////{
////    return sqrt(sq(x1 - x2) + sq(y1 - y2));
////}
////
////
////int main()
////{
////    double x1, x2, x3, y1, y2, y3, a;
////    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
////    a = dis(x1,y1,x2,y2);
////    a += dis(x1,y1,x3,y3);
////    a += dis(x2,y2,x3,y3);
////    printf("%.2f",a);
////
////    return 0;
////}//P5735 【深基7.例1】距离函数
////#include<iostream>
////#include<cstdio>
////#include<cmath>
////using namespace std;
////double dis(double x1, double y1, double x2, double y2)
////{
////	return sqrt(abs((x1 - x2) * (x1 - x2)) + abs((y1 - y2) * (y1 - y2)));
////}
////int main()
////{
////	double x1, y1, x2, y2, x3, y3, c;
////	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
////	double dis1 = dis(x1, y1, x2, y2), dis2 = dis(x2, y2, x3, y3), dis3 = dis(x3, y3, x1, y1);
////	c = dis1 + dis2 + dis3;
////	printf("%.2f", c);
////	return 0;
////}
////
//// Created by Administrator on 2024/2/29.
//////P2240 【深基12.例1】部分背包问题
////#include<iostream>
////#include<algorithm>
//
////using namespace std;
////struct coin
////{
////    int v;
////    int m;
////}a[110];int n, t, c;
////
////bool cmp(coin x, coin y)
////{
////    return x.v * y.m > y.v * x.m;
////
////}
////int main()
////{
////    
////    float ans = 0;
////   
////    cin >> n >> t;
////    c = t;
////    for (int i = 0; i < n; i++)
////        cin >> a[i].m >> a[i].v;
////    sort(a, a + n, cmp);
////    for (int i = 0; i < n; i++)
////    {
////        if (a[i].m < c)
////        {
////            c -= a[i].m;
////            ans += a[i].v;
////        }
////        else
////        {
////            ans += 1.0*c * a[i].v / a[i].m;break;
////        } 
////    }
////    printf("%.2lf", ans);
////    return 0;
////}
//
////{if (a[i].m > c)break;
////    c -= a[i].m;
////    ans += a[i].v;
////}
////if (i < n)
////    ans += 1.0 * c / a[i].m * a[i].v;
//
//
////P1223 排队接水   未完全过 82
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//struct water
//{
//    int num;
//    int t;
//}a[1010];
//int ans, n = 0;
//
//bool cmp(water a, water b)
//{
//    if (a.t != b.t)
//        return a.t < b.t;
//    return a.num < b.num;
//}
//
//int main()
//{
//
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i].t;
//        a[i].num = i;
//    }
//    sort(a + 1, a + n + 1, cmp);
//    for (int i = 1; i <= n; i++)
//    {
//        cout << a[i].num << " ";
//        ans += i * a[n - i].t;
//    }
//    cout << endl;
//    cout << ans * 1.0 / n << endl;
//    return 0;
//
//
//}P1047 [NOIP2005 普及组] 校门外的树
//#include<iostream>
//using namespace std;
//int l[10100] = { 0 };
//void cut(int l[10100], int s, int e)
//{
//	for (int i = s; i <= e; i++)
//		l[i] = 1;
//}
//
//int main()
//{
//	int  a, m, sum=0;
//	cin >> a >> m;
//	int s, e;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> s >> e;
//		cut(l, s, e);
//	}////一定要输入一次cut一次如果只又cin循环的话只cut了一次 就是最后被赋值的那组//cut没参与循环 只cut了一次
//	for (int i = 0; i <=a; i++)////如果下标为500 被cut 就是对的 但是后面又加1 所以又错了//i<a
//	{
//		if (l[i] == 0)
//		{
//			sum++;
//		}
//	}
//	cout << sum << endl;//////sum+1
//	return 0;
//}
//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct day
//{
//	int a, b, num;
//}d[6];
//bool z(day x, day y)
//{
//	return x.a + x.b > y.a + y.b;
//}
//int main()
//{
//	for (int i = 0; i < 7; i++)
//	{
//		cin >> d[i].a >> d[i].b;
//		d[i].num = i;
//	}
//	sort(d, d + 6, z);/////z这里不能写成max 因为在许多编程语言中，sort函数通常用于对数组或列表进行排序，它会根据元素的大小或其他指定的排序规则来重新排列数组中的元素。然而，有些编程语言中可能存在一些命名约定或关键字限制，导致无法将自定义函数命名为特定的关键字或函数名。
//
//	//关于您提到的情况，如果您在某个编程语言中定义了一个自定义函数并命名为"max"，而该编程语言的sort函数也使用了"max"这个名称作为内部函数或关键字，那么在调用sort函数时可能会出现冲突，导致无法正确排序。
//
//		//解决这个问题的方法通常是避免在编程中使用与内置函数或关键字相同的名称，以确保不会出现命名冲突。您可以尝试将自定义函数命名为与内置函数不冲突的其他名称，以避免这种问题。
//	if (d[0].a + d[0].b <= 8)
//		cout << "0";
//	else
//		cout << d[0].num + 1;
//	return 0;
//}

////////////////////目前题数 9 含5（1未过）