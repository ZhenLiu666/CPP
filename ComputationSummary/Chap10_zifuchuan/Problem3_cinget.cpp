// cin.get()和cin不同的地方是它会把空格和回车作为字符输入看待

#include<iostream>
using namespace std;
int main()
{
    char c ;
    cout << "Enter a sentence: " << endl ;
    // EOF表示终止字符，我们可以用 Ctrl+z来终止
    while ((c = cin.get()) != EOF)
    // 可以换一种写法：while(cin.get(c))
    // 还有一个更强大的输入，可以把终止也作为字符输入，这就是getchar
    {
        cout << c ;
    }
    return 0;
}