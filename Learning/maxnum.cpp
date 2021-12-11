#include<iostream>
using namespace std;
int main()
{
    int number[10] = {2,4,12,34,54,23,32,33,2,10};
    int max = 0;
    int i = 0;
    for(i=0;i<10;i++)
    {
        if(number[i]>max)
        max = number[i];
    }
    cout<<"The Maximal Number is:"<<max;
    return 0;
}