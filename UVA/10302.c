#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n, sum;
    while( scanf("%lld",&n) != EOF )
    {
        sum=( n*n *( n+1 )*( n+1) )/4;
        printf("%lld\n",sum);
    }
    return 0;
}
