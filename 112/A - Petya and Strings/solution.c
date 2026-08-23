#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
 
    scanf("%s",s1);
    scanf("%s",s2);
 
    for(int i=0; i<strlen(s1); i++)
      s1[i]=tolower(s1[i]);
 for(int i=0; i<strlen(s2); i++)
      s2[i]=tolower(s2[i]);
int r=0;
    for(int i=0; i<strlen(s1); i++)
    {
        if(s1[i]==s2[i])
            continue;
        else if(s1[i]<s2[i]){
        r=-1;
        break;}
        else{
          r=1;
            break;
        }
        }
printf("%d
",r);
    return 0;
}