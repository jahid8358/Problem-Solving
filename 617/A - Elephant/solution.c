#include <stdio.h>
#include<string.h>
int main(){
 
int a;
scanf("%d",&a);
 
int steps=a/5;
 
if(a%5!=0) steps++;
printf("%d
",steps);
 
    return 0;
}