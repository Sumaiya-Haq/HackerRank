#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int maximum=a;
    if(maximum<a)
    {
       maximum=a;
    }
    if(maximum<b)
    {
        maximum=b;
    }
    if(maximum<c)
    {
        maximum=c;
    }
    if(maximum<d)
    {
        maximum=d;
    }
    
    return maximum;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}