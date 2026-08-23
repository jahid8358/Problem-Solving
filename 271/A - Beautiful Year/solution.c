#include<stdio.h>
int main(){
 
int n;
scanf("%d",&n);
int a[4];
int j,i,k;
 
for(j=n+1; j<=9999; j++){
k=j;
 
for( i=0; i<4; i++)
    {a[i]=k%10;
     k=k/10;}
    i=0;
 
    if((a[i]!=a[i+1]) && (a[i]!=a[i+2]) && (a[i]!=a[i+3]) && (a[i+1]!=a[i+2]) && (a[i+1]!=a[i+3]) && (a[i+2]!=a[i+3]) )
    break;
}
 
int m=(a[3]*1000)+(a[2]*100)+(a[1]*10)+a[0];
printf("%d
",m);
return 0;
}