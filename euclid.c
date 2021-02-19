#include <stdio.h>

int gcd(int u, int v) {
    int t;
    while (u > 0) {
        if (u < v) {
            t = u; u = v; v = t;    
        }
        u = u - v;
    }
    return v;
}

int main()
{
    printf("%d\n", gcd(54321, 9876)); 
}