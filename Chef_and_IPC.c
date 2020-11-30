
// LINKS :: https://www.codechef.com/problems/IPCCERT

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
     int n, m, k, q, sum = 0, c = 0, i, j,a;
    scanf("%d %d %d", &n, &m, &k);
    for (i = 0; i < n; i++)
    {
    sum = 0;
    for (int j = 0; j < k; j++)
      {
      scanf("%d",&a);
       sum = sum + a;   // same line additn possible as its not array
      }
    scanf("%d",&q);
    if (sum >= m && q <= 10) 
       c++;
  }
  printf("%d\n", c);
}




/* 
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int n, m, k, sum = 0, c = 0, i, j;
    scanf("%d %d %d", &n, &m, &k);
    int a[n]={0},q[n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            scanf("%d",&sum);
            a[i]+=sum;
        }      
        scanf("%d", &q[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] >= m && q[i]<= 10)
            c++;
    }

    printf("%d\n", c);
    return 0;
} */