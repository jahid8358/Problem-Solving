#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[100];
   scanf("%s",s);
    int upper=0;
    int lower=0;
 
    int i=0,j=0;
    while(s[i]!='\0')
    {
        if(s[i]>='A' && s[i]<='Z')
            upper++;
        else if(s[i]>='a' && s[i]<='z')
            lower++;
        i++;
    }
   if(upper>lower)
   {
       while(s[j]!='\0')
        {s[j]=toupper(s[j]);
        j++;}
   }
   else
    {
    while(s[j]!='\0')
        {s[j]=tolower(s[j]);
        j++;}
     }
     printf("%s
",s);
    return 0;
}
 