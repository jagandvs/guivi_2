#include <stdio.h>
int main()
{
    int i,r=0,n,temp;
    printf("Enter the number");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        i=n%10;
        r=r+(i*i*i);
        n/=10;
    }
    if(temp==r)
        printf("The number is an armstrong");
    else
        printf("The number is not an armstrong");
    return 0;
}
