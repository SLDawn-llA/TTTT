//
//#include<bits/stdc++.h>
//using namespace std;
//int a[110];
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    //存入其中的系数
//    for (int i = n; i >= 0; i--)
//    {
//        scanf("%d", &a[i]);
//    }
//    for (int i = n; i >= 0; i--)
//    {//符号问题
//        ////
//        if (a[i] == 0)continue;////////错在了== 写成了>= 把正数和0排了
//
//        //开头
//        if (i == n)
//        {
//            if (a[i] < 0)cout << "-";
//        }
//        else//循环一次 只输出一个带符号数 所以先暂时考虑一个数的各种情况
//        {
//            if (a[i] > 0)cout << "+";
//            if (a[i] < 0) cout << "-";
//        }
//        //绝对值
//        if ((a[i] == 1 || a[i] == -1) && i != 0);//除非是最后一位才输出1
//        //else if(a[i]==0);
//        else cout << fabs(a[i]);//其他输出绝对值
//        //后面的X
//        if (i == 1)cout << "x";
//        else if (i == 0);
//        else cout << "x^" << i;
//
//    }
//    return 0;
//}