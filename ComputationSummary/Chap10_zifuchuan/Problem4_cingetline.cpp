// 利用cin.getline读取数据
// 需要注意的是cin.getline读取字符串之后，指针会移动到终止字符之后

#include<iostream>
using namespace std;
int main()
{
    char a[10][10] ;
    int n = 0;
    cin >> n ;
    // cin.get可以读入n后边的空格
    cin.get();
    for (int i = 0 ; i < n ; i++ )
    cin.getline( a[i] , 10) ;
    for (int i = 0 ; i < n ; i++)
    cout << a[i] <<endl;
    return 0;
}