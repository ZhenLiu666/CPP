// 奇偶分类：给定一组数据根据奇偶性分成两个组
// 在上述分组的基础上进行排序，对奇数按从大到小，对偶数按照从小到大

#include<iostream>
using namespace std;
int main()
{
    int  all[10] , odd[10], even[10] ;
    int i = 0 , j = 0 ;
    // 输入10个数据
    for ( ; i< 10 ; i++)
    cin >> all[i] ;
    int numOdd = 0 ;
    int numEven = 0;
    //对奇偶数据进行分类
    for (i=0 ; i<10 ; i++)
    {
        if (all[i]%2 != 0 )
        {
            odd[numOdd] = all[i] ;
            numOdd++ ;
        }
        else
        {
            even[numEven] = all[i];
            numEven++;
        }
    }
    //利用选择排序，对奇数数据按照从大到小的顺序排序
    for(i=0 ; i<numOdd-1; i++)
    {
        for(j=i ; j<numOdd ; j++)
        {
            if(odd[j] > odd[i])
            {
            int tmp = odd[i];
            odd[i] = odd[j];
            odd[j] = tmp;
            }
        }
    }
    //利用选择排序，对偶数数据按照从小到大的顺序排序
    for(i=0 ; i<numEven-1; i++)
    {
        for(j=i ; j<numEven ; j++)
        {
            if(even[j] < even[i])
            {
            int tmp = even[i];
            even[i] = even[j];
            even[j] = tmp;
            }
        }
    }
    // 输出运算的结果
    cout << "奇数为：" ;
    for(i=0 ; i< numOdd ; i++)
    cout << odd[i] << " " ;
    cout << "偶数为：" ;
    for(i=0; i<numEven ; i++)
    cout << even[i] << " ";
    return 0;
}