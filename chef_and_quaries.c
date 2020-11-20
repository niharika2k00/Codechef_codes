
#include <stdio.h>
#include <conio.h>

int main()
{
    int t;
    printf("enter t value : ");
    scanf("%d", &t);

    while (t--)
    {
        long long n, k, remain, i, result, carry, counter = 0;
        scanf("%lld %lld", &n, &k);
        int a[n];

        for (i = 0; i < n; i++)
            scanf("%lld", &a[i]);

        for (i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                carry = a[i] - k;
                if (i + 1 >= n)
                {
                    remain = carry / k;
                    result = remain + n + 1;
                    printf("%lld\n", result);
                }
                else
                    a[i + 1] = carry + a[i + 1];
            }

            if (a[i] < k)
            {
                counter++;
                if (counter == 1)
                {
                    printf("%lld\n", i + 1);
                    break;
                }
            }
        }
    }
}

/* 4


4 8 
8 6 7 6 

6 5 
10 5 5 3 2 15

10 5
10 5 5 3 2 1 10 9 8 7 

1 2
99 */



int main(void) {
	// your code goes here
	int  t;
	
	scanf("%d", &t);

    while (t--)
    {
      int t,j,x ,i;
      int flag = 0 ;
      scanf("%d", &x);
      
 	  for(i=0 ; i<=x ; i++)
	  {
	      for(j = 0 ; j<x ; j++)
	      {
	          if( i + j == x)
	          flag = 1;
	          break;
	      }
	    
	   }
	   if (flag == 1)
	   printf("%d %d\n",i,j);
	   
	   else
	   printf("-1\n");
	
    }
	
	
	
	
	return 0;
}

