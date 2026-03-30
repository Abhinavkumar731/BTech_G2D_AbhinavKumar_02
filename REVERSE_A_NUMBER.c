#include<stdio.h>
int main ()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    int rev = 0;
    while(num>0)
    {
        rev = (rev*10) + (num%10);
        num = num / 10 ;
    }
    printf ("reversed number : %d", rev);
    return 0 ;
}