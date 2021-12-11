// 鸡兔同笼：给定一个总的脚数，问最多和最少有

#include<iostream>
using namespace std;
int main()
{
    int  nCase, i, nFeet ; //nCase表示输入的数据组数，nFeet表示输入的脚数
    cin >> nCase ;
    for(i = 0 ; i < nCase ; i++ )
    {
        cin >> nFeet ;
        if(nFeet % 2 !=0 )
        cout<< "0  0 " <<endl;
        else if (nFeet%4 != 0 )
        cout<< nFeet/4+1 << " " << nFeet/2 <<endl;
        else
         cout<< nFeet/4 << " " << nFeet/2 <<endl;
    }
    return 0;
}