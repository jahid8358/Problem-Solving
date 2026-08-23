#include<stdio.h>
#include<string.h>
int main(){
 
int freq[256]={0};
char str[101];
scanf("%s",str);
int dis=0;
for(int i=0; i<strlen(str); i++)
{
    if(freq[str[i]]==0)
    {
    freq[str[i]]=1;
    dis++;
    }
}
if(dis%2==0)
    printf("CHAT WITH HER!
");
else
    printf("IGNORE HIM!
");
 
return 0;
}