#include<stdio.h>
int main()
{
    int n;
    int i;
    printf("Enter the Number);
    scanf("%d",& n);
       for(i=1;i<=10;i++)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
    return 0;
}
