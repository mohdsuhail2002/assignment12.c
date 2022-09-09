#include<stdio.h>
void firstevenreverse(int);
int main()
{
    int n;
    printf("enter the value");
    scanf("%d",&n);
    firstevenreverse(n);
    printf("\n");
    return 0;
}
void firstevenreverse(int num)
{
    if(num==2)
    {
        printf("\n%d",num);
    }
    else
    {
        printf("\n%d",num);
        firstevenreverse(num-2);
    }
}