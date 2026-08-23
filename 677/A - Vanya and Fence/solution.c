#include<stdio.h>
int main()
{
    int n,h;
    scanf("%d%d",&n,&h);
 
    int arr[n];
 
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
 
    int one=0;
    int two=0;
 
    for(int i=0; i<n; i++)
    {
        if(arr[i]>h)
            two+=2;
        else
            one++;
    }
    int total=one+two;
    printf("%d",total);
    return 0;
}