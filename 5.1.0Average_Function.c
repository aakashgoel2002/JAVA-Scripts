#include<stdio.h>
float average(float a,float b,float c);
int main(){
    float a,b,c,avg;            //taking the float variables   
    printf("Enter 3 Numbers:\n");
    scanf("%f",&a);             //taking the input
    scanf("%f",&b);             //taking the input
    scanf("%f",&c);             //taking the input
    avg=average(a,b,c);         // finding the average
    printf("The Average of the Numbers entered above is: %f",avg);
    return 0;                   
}
float average(float a,float b,float c)//function to find average
{
    float avg=(a+b+c)/3.00;     //calculating average
    return avg;
}
