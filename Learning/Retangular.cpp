#include<iostream>
#include <cstdio>
using namespace std;

class CRectangle
{
public:
    int w, h;
    int Area()
    {
        return w * h;
    }
    int Perimeter()
    {
        return 2 * (w + h);
    }
    void Init(int w_, int h_)
    {
        w = w_;
        h = h_;
    }; //必须有分号
};

int main()
{
    int w=1, h=2;
    CRectangle r; //r是CRectangle类的一个对象 cin >> w >> h;
    r.Init(w, h);
    cout << r.Area() << endl << r.Perimeter()<<endl;
    return 0;
}