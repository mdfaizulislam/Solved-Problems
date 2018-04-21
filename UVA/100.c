#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d=1;
    scanf("%d",&a);
    while( scanf("%d %d",&b,&c) == 2 && a < 15 )
    {
        if( b > c )
            printf(">\n");
        else if( b < c )
            printf("<\n");
        else
            printf("=\n");
         d++;
         if( d > a)
            break;
    }
    return 0;
}
