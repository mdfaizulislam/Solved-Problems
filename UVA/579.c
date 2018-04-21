#include <stdio.h>
#include <stdlib.h>

int main()
{
    double h,h1,m,m1,angle;
    while( scanf("%lf:%lf",&h,&m) == 2 )
    {
        if( h == 0 && m == 0 )
            break;

        h1=h*30+0.5*m;
        m1=m*6;
        angle=h1-m1;
        if( angle < 0 )
            angle*=-1;
        if( angle < 180 )
            printf("%.3lf\n",angle);
        else
            printf("%.3lf\n",360-angle);
    }
    return 0;
}
