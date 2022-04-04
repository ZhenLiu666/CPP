#include <cstdio>
using namespace std;
int main(){
    int a = 10;
    int const &b = a;
    a = 3;
    printf("a=%d  b=%d\n", a, b);
    return 0;
}