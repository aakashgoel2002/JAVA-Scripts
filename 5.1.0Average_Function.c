#include<stdio.h>
float average(float a,float b,float c);
int main(){
    float a,b,c,avg;            //taking the float variables   
    printf("Enter 3 Numbers: \n");
    scanf("%f",&a);//taking the input
    scanf("%f",&b);
    scanf("%f",&c);
    avg=average(a,b,c);// finding the average
    printf("The Average of the Numbers entered above is %f",avg);
    return 0;//returning main
}
float average(float a,float b,float c)//function to find average
{
    float avg=(a+b+c)/3.00;
    return avg;
}
