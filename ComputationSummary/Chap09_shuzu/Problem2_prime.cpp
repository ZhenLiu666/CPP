// 输出100以内的素数

// 法一：
// 一种直观的方法就是看这个数本身是否有除了1以外的因子，挨着进行判断
// #include<iostream>
// using namespace std;
// int main()
// {
//     bool prime = true ;
//     for (int i = 0 ; i < 100 ; i++)
//     {
//         prime = true ;
//         for ( int j = 2 ;j<i ; j++)
//         {
//             if(i%j==0)
//             prime = false ;
//         }
//         if (prime == true)
//         cout << i << endl;
//     }
//     return 0;
// }

// 法二：
// 我们可以把前面每个元素的每个倍数从100中剔除
// 事实上我们只需要循环到10即可
// 最后我们把剩余的元素输出即可
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int sum = 0,a[100] = {0} ;
    for(int i = 2 ; i <sqrt(100.0) ; i++)
    {
        sum = i ;
        if(a[sum]==0)
        {
            while(sum <100)
            {
                sum = sum + i ;
                if(sum<100)
                a[sum] = 1 ;
            }

        }
    }
    for(int i = 2 ; i <100 ; i++)
    {
        if( a[i] == 0)
        cout << i << " " ;
    }
    return 0;
}