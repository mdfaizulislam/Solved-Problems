#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int cal( char ca[] )
{
    int i, l, s=0, sum=0;
    l=strlen(ca);
    for( i = 0 ; i < l ; i++ )
    {
        if( ( ca[i] > 64 && ca[i] < 91) || ( ca[i] > 96 && ca[i] < 123) )
        {
            if( isupper(ca[i]) )
            {
                sum+=ca[i]-64;
            }
            else
            {
                sum+=ca[i]-96;
            }
        }
    }
    while( sum != 0)
    {
        s+=sum%10;
        sum/=10;
        if( sum == 0 && s > 9)
        {
            sum=s;
            s=0;
        }
    }
    return s;
}
int main()
{
    int sum1, sum2;
    char name1[27], name2[27];
    while( gets(name1) )
    {
        gets(name2);
        sum1=cal(name1);
        sum2=cal(name2);
        if( sum1 < sum2 )
            printf("%.2lf %%\n",(double) (100.0*sum1/sum2));
        else
            printf("%.2lf %%\n",(double) (100.0*sum2/sum1));
    }
    return 0;
}
