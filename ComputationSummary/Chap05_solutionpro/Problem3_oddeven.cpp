// 奇偶分类：给定一组数据根据奇偶性分成两个组

#include<iostream>
using namespace std;
int main()
{
    int  all[10] , odd[10], even[10] ;
    int i = 0 , j = 0 ;
    for ( ; i< 10 ; i++)
    cin >> all[i] ;
    int numOdd = 0 ;
    int numEven = 0;
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
    cout << "奇数为：" ;
    for(i=0 ; i< numOdd ; i++)
    cout << odd[i] << " " ;
    cout << "偶数为：" ;
    for(i=0; i<numEven ; i++)
    cout << even[i] << " ";
    return 0;
}