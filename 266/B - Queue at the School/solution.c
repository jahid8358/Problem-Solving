#include <stdio.h>
 
int main(){
    int n,t;
    scanf("%d %d",&n,&t);
    char c[51];
    scanf("%s",c);
 
    for(int j=t; j>0; j--)
    {   for(int i=0; i<n-1; i++)
        {
            if(c[i]=='B' && c[i+1]== 'G')
            {
                char temp = c[i];
                 c[i]=c[i+1];
                 c[i+1]=temp;
                i++;
            }
        }
    }
printf("%s
",c );
 
    return 0;
}