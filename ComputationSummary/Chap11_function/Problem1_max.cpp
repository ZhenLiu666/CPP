// 利用cin.getline读取数据
// 需要注意的是cin.getline读取字符串之后，指针会移动到终止字符之后

#include<iostream>
using namespace std;
//如果把函数的定义写在main之后
//float max ( float  , float )
float max ( float a , float b)
{
    if (a>b)
    return a ;
    else
    return b ;
} 

int main()
{
    // int m = 3 , n =4 ;
    // float result = 0 ;
    // result = max (m, n ) ;
    // cout << result ;
    cout << max(3,4) ;
    return 0;
}