#include<stdio.h>
#include<stdlib.h>
int main()
{
 
    int arr[5][5];
 
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("
");
    }
    int r;
    int c;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr[i][j]==1)
            {
                r= i;
                c=j;
            }
        }
    }
    int movr=abs(r-2);
    int movc=abs(c-2);
 
    int moving=movr+movc;
    printf("%d
",moving);
    return 0;
}