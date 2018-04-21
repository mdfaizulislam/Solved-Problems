#include<stdio.h>
#include<math.h>
int main()
{
    int i = 1 , count = 0, check, ugly;
    while( 1 )
    {
        check=i;
        ugly=1;
        while( check > 1)
        {
            if( check%2 )
            {
                if( check%3 )
                {
                    if( check%5 )
                    {
                        ugly=0;
                        break;
                    }
                    else
                    {
                        check/=5;
                    }
                }
                else
                {
                    check/=3;
                }
            }
            else
            {
                check/=2;
            }
        }
        if( ugly )
            count++;
        if( count >= 1500 )
        {
            break;
        }
        i++;
    }
     printf("The 1500'th ugly number is %d.\n",i);
    return 0;
}
