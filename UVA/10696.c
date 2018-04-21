#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int N;
    while( scanf("%ld",&N) && N != 0 )
    {
        if( N <= 100 )
            printf("f91(%ld) = 91\n",N);
        else
            printf("f91(%ld) = %ld\n",N,N-10);
    }
    return 0;
}


