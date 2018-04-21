#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b) == 2 )
    {
        if( ((-100 <= a) && ( a <= 100 )) && (( 0 <= b ) && ( b <= 200 )) )
            printf("%d\n",2*a*b);
    }
    return 0;
}
