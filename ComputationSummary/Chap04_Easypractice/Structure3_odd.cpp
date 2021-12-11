#include<iostream>
using namespace std;
int main()
{
    int i = 0 ;
    cout << "20以内的奇数：" << endl ;
    // for(i=20;i>=0;i--)
    for(i=0;i<20;i++)
    {
        if (i%2 != 0)
        cout<< i << endl;
    }
}
