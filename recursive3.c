#include<stdio.h>
void firstnodd(int,int);
int main()
{
    int n=1,N;
    printf("enter the value");
    scanf("%d",&N);
    firstnodd(n,N);
    printf("\n");
    return 0;
}
void firstnodd(int num,int NUM)
{
    if(num>2*NUM)
    {
    
        
    }
    else
    {
    printf("\n%d",num);
    firstnodd(num+2,NUM);
    }
}
