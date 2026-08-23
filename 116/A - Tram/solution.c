#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
 
int enter,exit,current=0,max=0;
for(int i=1; i<=n; i++)
{
   scanf("%d %d",&exit,&enter);
   current=current +enter;
   current=current-exit;
  
  if(current>max)
  max=current;
}
printf("%d",max);
return 0;
}