#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int i,j,array[6],swap,c,d,k,l,T;
    scanf("%ld",&T);
        for( i = 1 ; i <= T ; i++ )
        {
            for( j = 0 ; j < 4 ; j++ )
            scanf("%ld",&array[j]);
            k=0;
              for (c = 0 ; c <  4-1 ; c++)
              {
                for (d = 0 ; d < 4 - c-1 ; d++)
                {
                  if (array[d] > array[d+1])
                  {
                    swap       = array[d];
                    array[d]   = array[d+1];
                    array[d+1] = swap;
                  }
                }
              }
              l=array[0];
              for( d = 0 ; d < 4; d++)
              {
                  if( array[d] == l )
                    k++;
              }
                if( k == 4)
                    printf("square\n");
                else if( array[0]==array[1] && array[2]==array[3])
                    printf("rectangle\n");
                else if( array[0]+array[1]+array[2] > array[3])
                    printf("quadrangle\n");
                else
                    printf("banana\n");
        }
    return 0;
}
