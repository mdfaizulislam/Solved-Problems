#include<stdio.h>
int main()
{
    int n;
    int c,array[1001],i,d,swap;
    while( scanf("%d",&n) != EOF )
    {
        for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

      for (c = 0 ,i=0 ; c < ( n - 1 ); c++)
      {
        for (d = 0 ; d < n - c - 1; d++)
        {
          if (array[d] > array[d+1]) /* For decreasing order use < */
          {
            swap       = array[d];
            array[d]   = array[d+1];
            array[d+1] = swap;
            i++;
          }
        }
      }
      printf("Minimum exchange operations : %d\n",i);
    }


    return 0;
}
