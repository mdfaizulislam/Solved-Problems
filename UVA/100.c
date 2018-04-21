#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned long a,b,n,c,d,p=0,e;
    while( scanf("%lu %lu",&a,&b) == 2 )
       {
           printf("%lu %lu",a,b);

           if( b < a )
           {
                e=a;
                c=b;
                a=b;
                b=e;
           }
            d=a;
            p=0;
            n=0;
            for( c = a ; a <= b ; a++ )
            {
                c=a;
                n=1;
                while( c > 1 )
                {
                    if( c%2 == 1 )
                        {
                            c=3*c+1;
                            n++;
                        }
                    else
                        {
                            c=c/2;
                            n++;
                        }
                }
                if( n > p )
                    p=n;
            }
            printf(" %lu\n",p);
        }
    return 0;
}
