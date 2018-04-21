#include<stdio.h>
int main()
{
    unsigned long int num1,num2,r1=0,r2=0,j=0,sp,k=0;
    while( scanf("%ld %ld",&num1,&num2))
    {
        if( num1 == 0 && num2 == 0 )
            break;
        j=0;
        k=0;
        if( num2 > num1)
        {
            sp=num1;
            num1=num2;
            num2=sp;
        }
        while(num1 != 0 )
        {
          r1=num1%10;
          num1/=10;
          r2=num2%10;
          num2/=10;
          if( r1+r2+k > 9 )
          {
                j++;
                k=1;
          }
	else
		k=0;
        }
        if( j == 0 )
            printf("No carry operation.\n");
        else if( j== 1 )
            printf("1 carry operation.\n");
        else
            printf("%ld carry operations.\n",j);

    }
    return 0;
}
