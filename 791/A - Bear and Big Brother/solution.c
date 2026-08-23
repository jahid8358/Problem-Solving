#include <stdio.h>
#include<string.h>
int main(){
 
int a,b;
scanf("%d%d",&a,&b);
 
int count=0;
for(int i=0; i<=500; i++)
{
    a*=3;
    b*=2;
    count++;
 
    if(a>b)
        break;
}
 
printf("%d
",count);
 
    return 0;
}