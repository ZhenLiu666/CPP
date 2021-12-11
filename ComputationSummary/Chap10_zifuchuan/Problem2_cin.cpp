// 利用cin读取数据，如果能读取到合适的数据就为真，否则就返回0
// 可以利用cin读取数据的特性当作数据流

#include<iostream>
using namespace std;
int main()
{
    float grade ;
    cout << "Enter grade: " ;
    while ( cin >> grade )
    {
        if (grade >= 85 )
        cout << grade << "GOOD!" << endl ;
        if (grade < 60)
        cout << grade << "fail ! " << endl;
        cout << "Enter grade: ";
    }
    return 0;
}

