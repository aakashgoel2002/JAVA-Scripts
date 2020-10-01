#include<stdio.h>
float average(int a,int b,int c);
int main()
{
    int a,b,c;
    float avg;
    printf("Enter 3 Numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    avg=average(a,b,c);
    printf("The Average of the Numbers entered above is %f",avg);
    return 0;
}
float average(int a,int b,int c)
{
    float avg=(float)(a+b+c)/3;
    return avg;
}
