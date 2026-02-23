#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    printf ("the sum upto given number is :%d",sum);
    return 0;


}