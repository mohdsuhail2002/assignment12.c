#include<stdio.h>
void firstnoddreverse(int);
int main()
{
    int n;
    printf("enter the value");
    scanf("%d",&n);
    firstnoddreverse(n*2);
    printf("\n");
    return 0;
}
void firstnoddreverse(int num)
{
    if(num==1)
    {
       printf("\n%d",1); 
    }
    else
    {
        if(num%2==0)
        {
            num++;
        }
    printf("\n%d",num);
    firstnoddreverse(num-2);
    }
}
