#include <stdio.h>
using namespace std;
int main(){
    int b = 10;
    int* a = &b;
    printf("b=%d\n", b);
    printf("a=%p\n", a);
    printf("*a=%d\n", *a);
    b = b+1 ;
    printf("*a=%d\n", *a);
}