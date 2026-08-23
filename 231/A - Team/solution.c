#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
 int s=0;
int a[3];
for(int i=1; i<=t; i++){
 int x,y,z;
  scanf("%d %d %d",&x,&y,&z);
  int p=x+y+z;
  if(p>1)
 s=s+1;
}
printf("%d",s);
 
return 0;
}