#include<stdio.h>

int main()
{
    int N,m,i;
    while( scanf("%d",&N))
    {
        if( N == 0 )
            break;
        int a[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},j=0;
        for( i = N ; i > 1 ; i-- )
        {
            m=i;
            while( m != 1 )
            {
                if( m%2 == 0 )
                {
                    a[0]++;
                    m/=2;
                }
                else if( m%3 == 0 )
                {
                    a[1]++;
                    m/=3;
                }

                else if( m%5 == 0 )
                {
                    a[2]++;
                    m/=5;
                }
                else if( m%7 == 0 )
                {
                    a[3]++;
                    m/=7;
                }
                else if( m%11 == 0 )
                {
                    a[4]++;
                    m/=11;
                }
                else if( m%13 == 0 )
                {
                    a[5]++;
                    m/=13;
                }
                else if( m%17 == 0 )
                {
                    a[6]++;
                    m/=17;
                }else if( m%19 == 0 )
                {
                    a[7]++;
                    m/=19;
                }
                else if( m%23 == 0 )
                {
                    a[8]++;
                    m/=23;
                }
                else if( m%29 == 0 )
                {
                    a[9]++;
                    m/=29;
                }
                else if( m%31 == 0 )
                {
                    a[10]++;
                    m/=31;
                }
                else if( m%37 == 0 )
                {
                    a[11]++;
                    m/=37;
                }
                else if( m%41 == 0 )
                {
                    a[12]++;
                    m/=41;
                }
                else if( m%43 == 0 )
                {
                    a[13]++;
                    m/=43;
                }
                else if( m%47 == 0 )
                {
                    a[14]++;
                    m/=47;
                }
                else if( m%53 == 0 )
                {
                    a[15]++;
                    m/=53;
                }
                else if( m%59 == 0 )
                {
                    a[16]++;
                    m/=59;
                }
                else if( m%61 == 0 )
                {
                    a[17]++;
                    m/=61;
                }
                else if( m%67 == 0 )
                {
                    a[18]++;
                    m/=67;
                }
                else if( m%71 == 0 )
                {
                    a[19]++;
                    m/=71;
                }
                else if( m%73 == 0 )
                {
                    a[20]++;
                    m/=73;
                }
                else if( m%79 == 0 )
                {
                    a[21]++;
                    m/=79;
                }
                else if( m%83 == 0 )
                {
                    a[22]++;
                    m/=83;
                }
                else if( m%89 == 0 )
                {
                    a[23]++;
                    m/=89;
                }
                else if( m%97 == 0 )
                {
                    a[24]++;
                    m/=97;
                }
            }
        }
        printf("%3d! =",N);
        while( j<25 )
        {
            if( a[j] == 0 )
                break;
            if( j < 15 )
                printf("%3d",a[j++]);
            else
            {
                if( j == 15 )
                    printf("\n      %3d",a[j++]);
                else
                    printf("%3d",a[j++]);
            }
        }
        printf("\n");
    }
    return 0;
}
