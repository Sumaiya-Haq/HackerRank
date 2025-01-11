#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n;
    long l;
    char ch;
    float f;
    double d;
   scanf("%d %ld %c %f %lf",&n,&l,&ch,&f,&d);
   printf("%d\n %ld\n%c\n %.3f\n %.9lf",n,l,ch,f,d);
    return 0;
}