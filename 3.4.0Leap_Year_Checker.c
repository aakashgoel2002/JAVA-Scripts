#include<stdio.h>
int main()
{
    int year,leap;
    printf("Enter the year which is to be checked ");
    scanf("%d",& year);
    leap=year%4;
    if(leap==0)
    printf("This is a Leap Year");
    else
    printf("This is not a Leap Year");
    return 0;
}