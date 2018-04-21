#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pac
{
    char abc[18];
    int val;
};
int main()
{
    struct pac ca[1002];
    int m, n, i, check, test, sum;
    char st[50];
    while( scanf("%d %d",&m,&n) != EOF )
    {
        for( i = 0 ; i < m ; i++ )
        {
            scanf("%s %d",ca[i].abc, &ca[i].val);
        }
        sum=0;
        while( scanf("%s",st) && n > 0 )
        {
            check=strcmp(st,".");
            if( !check )
            {
                n--;
                printf("%d\n",sum);
                sum=0;
            }
            for( i = 0 ; i < m ; i++ )
            {
                test=strcmp(st,ca[i].abc);
                if( !test )
                {
                    sum+=ca[i].val;
                }
            }
        }
    }
    return 0;
}
