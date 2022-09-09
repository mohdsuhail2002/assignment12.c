#include<stdio.h>
void firstnreverse(int);
int main()
{
    int n;
    printf("enter the value");
    scanf("%d",&n);
    firstnreverse(n);
    printf("\n");
    return 0;
}
void firstnreverse(int num)
{
    if(num==1)
    {
        printf("\n%d",1);
    }
    else
    {
    printf("\n%d",num);
    firstnreverse(num-1);
    }
}