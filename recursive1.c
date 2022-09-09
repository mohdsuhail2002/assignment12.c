#include<stdio.h>
void firstn(int,int);
int main()
{
    int n=1,N;
    printf("enter a value");
    scanf("%d",&N);
    firstn(n,N);
    return 0;
    
}
void firstn(int num,int NUM)
{
    if(num>NUM)
    {
    
    }
    else
    {
        printf("%d\n",num); 
        firstn(num+1,NUM);
    }
}
