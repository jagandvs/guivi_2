#include <stdio.h>
int main()
{
    int max,min,m,n,count=0;
    printf("Enter the intervals");
    scanf("%d%d",&min,&max);
    printf("The prime number are :");
    for(n=min;n<=max;n++)
    {
        count=0;
        for(m=2;m<=n/2;m++)
        {
            if(n%m==0)
                count++;
        }
        if(count==0 && n!=1)
            printf("%d\t",n);
    }
    return 0;
}
