#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
char s[n];
scanf("%s",s);
 
int i=0,an=0,da=0;
while(s[i]!='\0')
{
    if(s[i]=='A')
        an++;
    else if(s[i]=='D')
        da++;
    i++;
}
 
if(an>da)
    printf("Anton
");
else if(an<da)
    printf("Danik
");
else
    printf("Friendship
");
 
    return 0;
}
 