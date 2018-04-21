#include <stdio.h>
#include<math.h>
#include <stdlib.h>

int main()
{
    int i=1,T;
    double time1, time2, d, u, v;
    scanf("%d",&T);
    while( i <= T )
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        if( v >= u || v == 0 || u == 0 )
            printf("Case %d: can't determine\n",i++);
        else
        {
            time1=d/sqrt( u*u -v*v );
            time2=d/u;
            if( time1 > time2 )
                printf("Case %d: %.3lf\n",i++,time1-time2);
            else
                printf("Case %d: %.3lf\n",i++,time2-time1);
        }
    }
    return 0;
}
