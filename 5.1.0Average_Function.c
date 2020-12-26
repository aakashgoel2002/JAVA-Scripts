#include<stdio.h>
float average(float a,float b,float c);
int main()
{
    float a,b,c,avg;
    printf("Enter 3 Numbers\n");
    scanf("%f",&a,&b,&c);
    avg=average(a,b,c);
    printf("The Average of the Numbers entered above is %f",avg);
    return 0;

   float average(float a,float b,float c)//function to find average
{
    float avg=(a+b+c)/3.00;
    return avg;
}
