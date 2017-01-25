#include <stdio.h>
int main()
{
    int max,min,i,temp,r,s;
    printf("Enter the minimum and maximum value");
    scanf("%d%d",&min,&max);
    printf("The armstrong numbers between the given intervals are :");
    for(i=min;i<=max;i++)
    {
        temp=i;
        r=0;
        while(temp!=0)
        {
            s=temp%10;
            r=r+(s*s*s);
            temp=temp/10;
        }
        if(i==r)
            printf("%d\t",i);

    }
    return 0;
}
