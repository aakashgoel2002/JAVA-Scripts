#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number whose table is to be printed ");
    scanf("%d",& n);
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
    return 0;
}