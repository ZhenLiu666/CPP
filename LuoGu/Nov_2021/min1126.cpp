#include<iostream>
using namespace std;
int main()
{
    int n ; 
    cin >> n ;
    int a[n]; 
    int flag = 0 ;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> a[i] ;
    }   
    flag = a[0] ;
    for(int j = 1 ; j < n ; ++j)
    {
        if (a[j] <= flag) 
        flag = a[j] ; 
    }
    cout << flag ;
    return 0;
}