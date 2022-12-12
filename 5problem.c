#include<stdio.h>
int summition(int i,int n)
{
    if(i>n)return 0;
    int s=summition(i+1,n);
    return s+i;
}
int main()
{
    int n;
    scanf("%d",&n);
    int s=summition(1,n);
    printf("%d\n",s);
}
