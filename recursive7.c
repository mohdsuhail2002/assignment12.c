#include<stdio.h>
void squarennatural(int,int);
int main()
{
    int n=1,N;
    printf("enter the value");
    scanf("%d",&N);
    squarennatural(n,N);
    printf("\n");
    return 0;
}
void squarennatural(int num,int NUM)
{
    if(num>NUM)
    {
        
    }
    else
    {
    printf("\n%d",num*num);
    squarennatural(num+1,NUM);
    }
}