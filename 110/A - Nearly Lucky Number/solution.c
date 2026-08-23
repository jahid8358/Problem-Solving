#include <stdio.h>
int main()
{
long long n;
scanf("%lld",&n);
int  count=0;
for(long long i=n; i>0; i/=10)
{
    if(i%10==4 || i%10==7)
        count++;
}
 
if(count==7 || count == 4)
    printf("YES
");
else
    printf("NO
");
 
    return 0;
}
 