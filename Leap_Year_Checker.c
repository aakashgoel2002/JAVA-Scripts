#include<stdio.h>
LeapChecker(int year);
int main(){
    int year,c;
    printf("Enter the year which is to be checked: ");
    scanf("%d",& year);
    c=LeapChecker(year);
    if(c==1)
    printf("%d is a Leap Year", year);
    if(c==0)
    else
    printf("%d is not a Leap Year", year);
    return 0;
}
    LeapChecker(int year)
    {
    int leap;
    leap=year%4;
    if(leap==0)
    leap=1;
    //else
    //leap=0;
    return leap;
    }
