#include<stdio.h>
void firstneven(int,int);
int main()
{
    int n=2,N;
    printf("enter the value");
    scanf("%d",&N);
    firstneven(n,N);
    printf("\n");
    return 0;
}
void firstneven(int num,int NUM)
{
    if(num>2*NUM)
    {
        
    }
    else
    {
        printf("\n%d",num);
        firstneven(num+2,NUM);
    }
}