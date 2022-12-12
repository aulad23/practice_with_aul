#include<stdio.h>
void function(int a)
{
    if(a==0)return;
    printf("%d ",a);
    function(a-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    function(n);
}
