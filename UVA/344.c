#include<stdio.h>
int main()
{
    int n,c,i,v,x,l,m;
    while( scanf("%d",&n) != EOF )
    {
        if( n == 0 )
            break;
            c=0;
            v=0;
            x=0;
            l=0;
            m=0;
        for( i = 1 ; i <= n ; i++ )
        {
            if( i%10 == 1 )
            {
                c++;
                if( i/10 <= 3)
                x+=i/10;
                else if(i/10 == 4 )
                {x++; l++;}
                if(i/10 == 5)
                    l++;
                else if( i/10 <= 8 && i/10 >= 6)
                {
                    x+=i/10-5;
                    l++;
                }
                else if( i/10 == 9 )
                {
                    x++;
                    m++;
                }
                continue;
            }
            else if( i%10 == 2 )
            {
                c+=2;
                if( i/10 <= 3)
                    x+=i/10;
                else if(i/10 == 4 )
                    {x++; l++; }
                else if( i/10 == 5 )
                    l++;
                else if( i/10 <= 8 && i/10 >= 6)
                {
                    x+=i/10-5;
                    l++;
                }
                else if( i/10 == 9 )
                {
                    x++;
                    m++;
                }
                continue;
            }
            else if( i%10 == 3 )
            {
                c+=3;
                if( i/10 <= 3)
                    x+=i/10;
                else if(i/10 == 4 )
                    {x++; l++;}
                else if( i/10 == 5 )
                    l++;
                else if( i/10 <= 8 && i/10 >= 6)
                {
                    x+=i/10-5;
                    l++;
                }
                else if( i/10 == 9 )
                {
                    x++;
                    m++;
                }
                continue;
            }
            else if( i%10 == 4 )
            {
                c+=1;
                v++;
                if( i/10 <= 3)
                    x+=i/10;
                else if(i/10 == 4 )
                    {x++; l++;}
                else if( i/10 == 5 )
                    l++;
                else if( i/10 <= 8 && i/10 >= 6)
                {
                    x+=i/10-5;
                    l++;
                }
                else if( i/10 == 9 )
                {
                    x++;
                    m++;
                }
                continue;
            }
            else if( i%10 == 5 )
            {
                c+=0;
                v++;
                if( i/10 <= 3)
                    x+=i/10;
                else if(i/10 == 4 )
                    {x++;l++;}
                else if( i/10 == 5 )
                    l++;
                else if( i/10 <= 8 && i/10 >= 6)
                {
                    x+=i/10-5;
                    l++;
                }
                else if( i/10 == 9 )
                {
                    x++;
                    m++;
                }
                continue;
            }
            else if( i%10 == 6 )
            {
                c+=1;
                v++;
                if( i/10 <= 3)
                    x+=i/10;
                else if(i/10 == 4 )
                   {
                       x++;
                       l++;
                   }
                else if( i/10 == 5 )
                    l++;
                else if( i/10 <= 8 && i/10 >= 6)
                {
                    x+=i/10-5;
                    l++;
                }
                else if( i/10 == 9 )
                {
                    x++;
                    m++;
                }
                continue;
            }
            else if( i%10 == 7 )
            {
                c+=2;
                v++;
                if( i/10 <= 3)
                    x+=i/10;
                else if(i/10 == 4 )
                    {x++; l++;}
                else if( i/10 == 5 )
                    l++;
                else if( i/10 <= 8 && i/10 >= 6)
                {
                    x+=i/10-5;
                    l++;
                }
                else if( i/10 == 9 )
                {
                    x++;
                    m++;
                }
                continue;
            }
            else if( i%10 == 8 )
            {
                c+=3;
                v++;
                if( i/10 <= 3)
                    x+=i/10;
                else if(i/10 == 4 )
                    {x++; l++;}
                else if( i/10 == 5 )
                    l++;
                else if( i/10 <= 8 && i/10 >= 6)
                {
                    x+=i/10-5;
                    l++;
                }
                else if( i/10 == 9 )
                {
                    x++;
                    m++;
                }
                continue;
            }
            else if( i%10 == 9 )
            {
                c+=1;
                x++;
                if( i/10 <= 3)
                    x+=i/10;
                else if(i/10 == 4 )
                    {x++; l++;}
                else if( i/10 == 5 )
                    l++;
                else if( i/10 <= 8 && i/10 >= 6)
                {
                    x+=i/10-5;
                    l++;
                }
                else if ( i/10 == 9 )
                {
                    x++;
                    m++;
                }
                continue;
            }
            else
            {
                if( i/10 == 0 ||  i/10 == 1)
                {
                    x++;
                    continue;
                }
                else if( i/10 == 2 )
                {
                    x+=2;
                    continue;
                }
                else if( i/10 == 3 )
                {
                    x+=3;
                    continue;
                }
                else if( i/10 == 4 )
                {
                    l++;
                    x++;
                    continue;
                }
                else if( i/10 == 5 )
                {
                    l++;
                    continue;
                }
                else if( i/10 == 6 )
                {
                    l++;
                    x++;
                    continue;
                }
                else if( i/10 == 7 )
                {
                    l++;
                    x+=2;
                    continue;
                }
                else if( i/10 == 8 )
                {
                    l++;
                    x+=3;
                    continue;
                }
                else if( i/10 == 9 || i == 100 )
                {
                    x++;
                    m++;
                    continue;
                }
            }

        }
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,c,v,x,l,m);
    }
    return 0;
}

