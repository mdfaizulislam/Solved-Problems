#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t;
    double area,ar,r,w,l;
    scanf("%d",&t);
    while( t-- )
    {
        scanf("%lf",&l);
        w=l*6/10;
        area=l*w;
        r=l/5;
        ar=acos(-1.0)*pow(r,2);
        printf("%.2lf %.2lf\n",ar,area-ar);
    }
    return 0;
}
