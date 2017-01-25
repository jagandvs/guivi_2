#include <stdio.h>
int main()
{
    int n,reverse=0,temp;
    printf("Enter the number");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        reverse=reverse*10;
        reverse=reverse+n%10;
        n/=10;
    }
    if(temp==reverse)
        printf("The number is palindrome");
    else
        printf("The number is not a palindrome");
    return 0;
}
