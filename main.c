#include <stdio.h>

int revprint(int n)
{
    if(n==0)
    {
        return 0;
    }
    int k =n%10;
    printf("%d",k);
    revprint(n/10);
}

int main()
{
    int n;
    scanf("%d", &n);
    revprint(n);
    return 0;
}
