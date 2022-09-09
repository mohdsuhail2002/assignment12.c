#include<stdio.h>
void reversenumber(int n);
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    reversenumber(n);
    printf("\n");
    return 0;

}
void reversenumber(int num)
{
    if(num==0)
    {

    }
    else{
        printf("%d",num%10);
        reversenumber(num/10);
    }
}