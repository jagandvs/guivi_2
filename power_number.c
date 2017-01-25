#include <stdio.h>
int main()
{
    int n,i,p=1,q;
    printf("Enter the number ");
    scanf("%d",&n);
    printf("Enter the power of %d  ",n);
    scanf("%d",&i);
    q=i;
    if(i==0)
        p=1;
    while(i!=0)
    {
        p=p*n;
        i--;
    }
    printf("The %d power %d is %d ",n,q,p);
    return 0;
}
