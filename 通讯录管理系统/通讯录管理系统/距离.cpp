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
////}//P5735 �����7.��1�����뺯��
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
//////P2240 �����12.��1�����ֱ�������
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
////P1223 �Ŷӽ�ˮ   δ��ȫ�� 82
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
//}P1047 [NOIP2005 �ռ���] У�������
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
//	}////һ��Ҫ����һ��cutһ�����ֻ��cinѭ���Ļ�ֻcut��һ�� ������󱻸�ֵ������//cutû����ѭ�� ֻcut��һ��
//	for (int i = 0; i <=a; i++)////����±�Ϊ500 ��cut ���ǶԵ� ���Ǻ����ּ�1 �����ִ���//i<a
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
//	sort(d, d + 6, z);/////z���ﲻ��д��max ��Ϊ������������У�sort����ͨ�����ڶ�������б���������������Ԫ�صĴ�С������ָ��������������������������е�Ԫ�ء�Ȼ������Щ��������п��ܴ���һЩ����Լ����ؼ������ƣ������޷����Զ��庯������Ϊ�ض��Ĺؼ��ֻ�������
//
//	//�������ᵽ��������������ĳ����������ж�����һ���Զ��庯��������Ϊ"max"�����ñ�����Ե�sort����Ҳʹ����"max"���������Ϊ�ڲ�������ؼ��֣���ô�ڵ���sort����ʱ���ܻ���ֳ�ͻ�������޷���ȷ����
//
//		//����������ķ���ͨ���Ǳ����ڱ����ʹ�������ú�����ؼ�����ͬ�����ƣ���ȷ���������������ͻ�������Գ��Խ��Զ��庯������Ϊ�����ú�������ͻ���������ƣ��Ա����������⡣
//	if (d[0].a + d[0].b <= 8)
//		cout << "0";
//	else
//		cout << d[0].num + 1;
//	return 0;
//}

////////////////////Ŀǰ���� 9 ��5��1δ����