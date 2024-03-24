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
//////P1223 排队接水   未完全过 82
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//struct water
//{
//    int num;
//    int t;
//}a[1010];
//double ans = 0;///////之前定义的ans 是int类型（后面乘以1.0即可）  82   但改成double类型 （后面不用乘以1.0) AC
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
//P1047 [NOIP2005 普及组] 校门外的树
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
// //P2084 进制转换
//#include<iostream>
//
//using namespace std;
// char a[1010];
//int main()
//{
//	int m;
//	cin >> m;
//	cin.getline(a, 1010);//////cin.getline     (数组，最大空间) 最大读取的字符数，避免数组溢出。
//	int x = strlen(a)-1;//////strlen 函数 得到字符的大小 不包括\0   而 sizeof包括 而且这里如果用sizeof 得到的是整个数组的大小//10101
//	////这里是因为 cin.getline 会将换行符号输入‘’当做第一个元素 而非1 所以要排除干扰 -1
//	for (int i = 1; i <=x; i++)
//	{
//		if (a[i] !='0')///这里是 字符数组 而不是整形数组所以要用‘’ 若不用直接！=0 就会10101字符串全过  
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
/////P1192 台阶问题 
// 动态规划    斐波拉契数列（非一般？）还有解法（找规律）
//#include<iostream>
//using namespace std;
//int a[100000];
//int k,n;
//const int m = 100003;
//int main()
//{
//	cin >> n >> k;
//	a[0] = 1;////就想 k=2时a[2]=a[1]+a[0]   按理说有两种 但若a[0]=0 就只有一种了不合常理 所以a[0]=1  第0阶没爬就到了也是一种嘛不能不算
//	a[1] = 1;
//	//每一阶 方法的总和
//	for (int i = 2; i <= n; i++)//0 1阶已经定义了 就从第二阶开始
//	{//每一阶 的计算方法  假设第i阶 就是i-1 i-2 i-3 ----》i-k(还差一步（1到k阶大小的一步）的所有情况的总和)而且最早的第一第二阶已经定义好了 接下来只用递推就行
//		for (int j = 1; j <= k; j++)//从i-1 到i-k
//		{//a[i] += a[i - j];佬们为什么不这么写 是因为还要mod 为什么要mod呢 由于结果比较大，一定不要忘记边走边模！所以如下
//			if (i >= j)////k有可能>i (n) 则当j=k时 i-j<0 要排除    当然k>n时方法当然也不止一种 一步不一定用最大的k呀 也可以用1 2步来组合 所以只用让i-j>=0即可  
//				a[i] = (a[i] + a[i - j]) % m;//小于零 不用写 或者continue都行 排除就好了
//			else//
//				continue;//else这里可写可不写
//		}
//	}
//	cout << a[n]%m;//由于结果比较大，一定不要忘记边走边模！ 不然可能超过int最大可能数 毕竟最大可以有100000阶嘛 每阶又那么多方法 一相加 可能会超
//	return 0;
//}
//P4994 终于结束的起点
/////////严重参考 有时间再做 递归不行
//#include<iostream>
//using namespace std;
//typedef long long ll;//自定义类型longlong  简写为 ll
//ll a[10000000];///记忆数组，虽然m不大但是不知道n多大，尽量开大，不过1千万差不多极限  注意这里a不止要注意数组的大小 而且要注意数组中元素的大小
//const int b = 0x7fffffff;//会随着斐波拉契 变大的很快 在进行斐波那契递推时，因为斐波那契数列的数增长太快，已经溢出 long long。
//
////建议边做边取余
//
//ll m;
//
//ll f(ll i)
//{
//	if (a[i])return a[i];//调取记忆
//	if (i == 1 || i == 2)return a[i] = 1 % m;
//	else return a[i] = (f(i - 1) + f(i - 2)) % m;//这时就顺带%m可以使主程序更简单
//}
//int main()
//{
//	
//	cin >>m;
//	ll i = 1;
//	while(f(i)!= 0 || f(i+1)!= 1)//////////与&&条件相反才i++   即只要有一项不满足  所以用逻辑或 ||
//	{	i++;
//		//a[i-1] = a[i - 2] + a[i - 3];//i从2开始 i-3就是负的了 a数组读取到无效的数据 错	
//	}
//	cout << i;
//	//while (f(i) != 0 || f(i + 1) != 1)//题目要求
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

////////////////////目前题数 14 含8（4994非常不熟）（全部AC）