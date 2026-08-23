#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int n;
    scanf("%d", &n);
 
    double total = 0.0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        scanf("%d", &x);
        total += x;
    }
 
    double p = (total / (n * 100.0)) * 100.0;
    printf("%.12f
", p);
 
    return 0;
}