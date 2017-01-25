#include <stdio.h>
int main()
{
    int max,min,temp,reverse,i;
    printf("Enter the intervals");
    scanf("%d%d",&min,&max);
    for(i=min;i<=max;i++)
    {
        temp=i;
        reverse=0;
        while(temp!=0)
        {
            reverse=reverse*10;
            reverse=reverse+temp%10;
            temp/=10;
        }
        if(reverse==i)
            printf("%d\t",i);
    }
    return 0;
}
