#include<stdio.h>
int main()
{
    float C,F ;
    printf("Enter the temperature in degree Celcius");
    scanf("%f",&C);
    F = (9*(C/5))+32;
    printf("Enter the temperature in degree Fahrenheit is %f",F);
    return 0;
}