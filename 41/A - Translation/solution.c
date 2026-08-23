#include<stdio.h>
#include<string.h>
int main(){
char s1[101],s2[101];
scanf("%s",s1);
scanf("%s",s2);
 
if(strlen(s1)!=strlen(s2))
{printf("NO
");
  return 0;}
 
int i=0;
while(i<strlen(s1))
{
if(s1[i]!=s2[strlen(s2)-1-i])
{printf("NO
");
return 0;}
i++;
}
printf("YES
");
return 0;
 }