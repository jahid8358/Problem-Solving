#include<stdio.h>
#include<string.h>
int main(){
int t;
scanf("%d",&t);
int x=0;
 char s[5];
for(int i=1; i<=t; i++)
{
    scanf("%s",s);
 
    if(strchr(s,'+')){
        x++;}
    else{
        x--;}
}
printf("%d
",x);
return 0;
}