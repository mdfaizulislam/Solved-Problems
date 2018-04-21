#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int G, l, check, mul, i, j, n;
    char ca[102];
    while( scanf("%d",&G) )
    {
        if( G == 0 )
            return 0;
        scanf("%s",ca);
        l=strlen(ca);
        n=l/G;
        check=0;
        for( i = 1 ; i <= G ; i++ )
        {
            mul=i*n;
            for( j = mul-1; j >= check; j-- )
                printf("%c",ca[j]);
            check=mul;
        }
        printf("\n");
    }
    return 0;
}
