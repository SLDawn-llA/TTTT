//
//#include<bits/stdc++.h>
//using namespace std;
//int a[110];
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    //�������е�ϵ��
//    for (int i = n; i >= 0; i--)
//    {
//        scanf("%d", &a[i]);
//    }
//    for (int i = n; i >= 0; i--)
//    {//��������
//        ////
//        if (a[i] == 0)continue;////////������== д����>= ��������0����
//
//        //��ͷ
//        if (i == n)
//        {
//            if (a[i] < 0)cout << "-";
//        }
//        else//ѭ��һ�� ֻ���һ���������� ��������ʱ����һ�����ĸ������
//        {
//            if (a[i] > 0)cout << "+";
//            if (a[i] < 0) cout << "-";
//        }
//        //����ֵ
//        if ((a[i] == 1 || a[i] == -1) && i != 0);//���������һλ�����1
//        //else if(a[i]==0);
//        else cout << fabs(a[i]);//�����������ֵ
//        //�����X
//        if (i == 1)cout << "x";
//        else if (i == 0);
//        else cout << "x^" << i;
//
//    }
//    return 0;
//}