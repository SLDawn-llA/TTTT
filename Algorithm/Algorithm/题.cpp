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
//////P1223 �Ŷӽ�ˮ   δ��ȫ�� 82
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//struct water
//{
//    int num;
//    int t;
//}a[1010];
//double ans = 0;///////֮ǰ�����ans ��int���ͣ��������1.0���ɣ�  82   ���ĳ�double���� �����治�ó���1.0) AC
//int n = 0;
//
//bool cmp(water x, water y)
//{
//    if (x.t != y.t)
//        return x.t < y.t;
//    return x.num < y.num;
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
//        ans += (n - i) * a[i].t;
//    }
//    cout << endl;
//    printf("%.2f", ans / n);
//    //cout << ans * 1.0 / n << endl;
//    return 0;
//}
//
//P1047 [NOIP2005 �ռ���] У�������
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
// //P2084 ����ת��
//#include<iostream>
//
//using namespace std;
// char a[1010];
//int main()
//{
//	int m;
//	cin >> m;
//	cin.getline(a, 1010);//////cin.getline     (���飬���ռ�) ����ȡ���ַ������������������
//	int x = strlen(a)-1;//////strlen ���� �õ��ַ��Ĵ�С ������\0   �� sizeof���� �������������sizeof �õ�������������Ĵ�С//10101
//	////��������Ϊ cin.getline �Ὣ���з������롮��������һ��Ԫ�� ����1 ����Ҫ�ų����� -1
//	for (int i = 1; i <=x; i++)
//	{
//		if (a[i] !='0')///������ �ַ����� ������������������Ҫ�á��� ������ֱ�ӣ�=0 �ͻ�10101�ַ���ȫ��  
//		{
//			if (i == 1)
//				cout << a[i] <<"*"<<m << "^" << (x - i);
//			else
//				cout << "+" << a[i] << "*" << m <<"^" << (x - i);
//		}
//		else
//			continue;
//	}
//	return 0;
//}
/////P1192 ̨������ 
// ��̬�滮    쳲��������У���һ�㣿�����нⷨ���ҹ��ɣ�
//#include<iostream>
//using namespace std;
//int a[100000];
//int k,n;
//const int m = 100003;
//int main()
//{
//	cin >> n >> k;
//	a[0] = 1;////���� k=2ʱa[2]=a[1]+a[0]   ����˵������ ����a[0]=0 ��ֻ��һ���˲��ϳ��� ����a[0]=1  ��0��û���͵���Ҳ��һ���ﲻ�ܲ���
//	a[1] = 1;
//	//ÿһ�� �������ܺ�
//	for (int i = 2; i <= n; i++)//0 1���Ѿ������� �ʹӵڶ��׿�ʼ
//	{//ÿһ�� �ļ��㷽��  �����i�� ����i-1 i-2 i-3 ----��i-k(����һ����1��k�״�С��һ����������������ܺ�)��������ĵ�һ�ڶ����Ѿ�������� ������ֻ�õ��ƾ���
//		for (int j = 1; j <= k; j++)//��i-1 ��i-k
//		{//a[i] += a[i - j];����Ϊʲô����ôд ����Ϊ��Ҫmod ΪʲôҪmod�� ���ڽ���Ƚϴ�һ����Ҫ���Ǳ��߱�ģ����������
//			if (i >= j)////k�п���>i (n) ��j=kʱ i-j<0 Ҫ�ų�    ��Ȼk>nʱ������ȻҲ��ֹһ�� һ����һ��������kѽ Ҳ������1 2������� ����ֻ����i-j>=0����  
//				a[i] = (a[i] + a[i - j]) % m;//С���� ����д ����continue���� �ų��ͺ���
//			else//
//				continue;//else�����д�ɲ�д
//		}
//	}
//	cout << a[n]%m;//���ڽ���Ƚϴ�һ����Ҫ���Ǳ��߱�ģ�� ��Ȼ���ܳ���int�������� �Ͼ���������100000���� ÿ������ô�෽�� һ��� ���ܻᳬ
//	return 0;
//}
//P4994 ���ڽ��������
/////////���زο� ��ʱ������ �ݹ鲻��
//#include<iostream>
//using namespace std;
//typedef long long ll;//�Զ�������longlong  ��дΪ ll
//ll a[10000000];///�������飬��Ȼm�����ǲ�֪��n��󣬾������󣬲���1ǧ���༫��  ע������a��ֹҪע������Ĵ�С ����Ҫע��������Ԫ�صĴ�С
//const int b = 0x7fffffff;//������쳲����� ���ĺܿ� �ڽ���쳲���������ʱ����Ϊ쳲��������е�������̫�죬�Ѿ���� long long��
//
////���������ȡ��
//
//ll m;
//
//ll f(ll i)
//{
//	if (a[i])return a[i];//��ȡ����
//	if (i == 1 || i == 2)return a[i] = 1 % m;
//	else return a[i] = (f(i - 1) + f(i - 2)) % m;//��ʱ��˳��%m����ʹ���������
//}
//int main()
//{
//	
//	cin >>m;
//	ll i = 1;
//	while(f(i)!= 0 || f(i+1)!= 1)//////////��&&�����෴��i++   ��ֻҪ��һ�����  �������߼��� ||
//	{	i++;
//		//a[i-1] = a[i - 2] + a[i - 3];//i��2��ʼ i-3���Ǹ����� a�����ȡ����Ч������ ��	
//	}
//	cout << i;
//	//while (f(i) != 0 || f(i + 1) != 1)//��ĿҪ��
//	//{
//	//	i++;
//	//}
//	//printf("%lld", i);
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int ans=0,n=0;
//	cin >> n;
//	while (n)ans = ans * 10 + n % 10, n = n / 10;
//	cout << ans;
//	return 0;
//}


#include<iostream >
#include<algorithm>
using namespace std;
int a[30];
int main()
{
	int n, r;
	cin >> n >> r;
	int i;
	for (i = r+1; i <=n; i++)
		a[i ] = 1;
	do {
		for (i = 1; i <=n ; i++)
			if (a[i] == 0)printf("%3d",i);
				
		cout << endl;
	} while (next_permutation(a+1, a + n+1));
	return 0;
}

////////////////////Ŀǰ���� 14 ��8��4994�ǳ����죩��ȫ��AC��