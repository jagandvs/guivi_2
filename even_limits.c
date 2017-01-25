#include<stdio.h>
int main()
{
    int max,min,i;
    printf("Enter the maximum and minimum values");
    scanf("%d%d",&min,&max);
    printf("The even numbers are :");
    if(min>max)
        printf("Enter the numbers in ascending order");
    for(i=min;i<=max;i++)
    {
        if(i%2==0)
           printf("%d\t",i);
    }
    return 0;
}
