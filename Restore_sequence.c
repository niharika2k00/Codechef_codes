
// LINKS :: https://www.codechef.com/NOV20B/problems/RESTORE

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long i, j, k = 0, MAX = 4000000;
    long long *a, *c;
    a = malloc(sizeof(long long) * MAX);
    c = malloc(sizeof(long long) * MAX);

    for (i = 2; i < MAX; i++)
        a[i] = 1;

    // -------------------  LOGIC prime-  -------------------
    for (i = 2; i < sqrt(MAX); i++)
    {
        if (a[i] == 1)
            for (j = i; i * j < MAX; j++)
                a[i * j] = 0;
    }

    for (i = 2; i < MAX; i++)
    {
        if (a[i] == 1)
            c[k++] = i; //c is a new array storing prime no. in every index.
    }

    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        printf("Value of n : ");
        scanf("%lld", &n);
        long long *b, *a1;

        b = malloc(sizeof(long long) * n);
        a1 = malloc(sizeof(long long) * n);

        printf("Value of b array : ");
        for (i = 0; i < n; i++)
            scanf("%lld", &b[i]);

        for (k = 0; k < n; k++)
            a1[k] = c[k];

        for (i = 0; i < n; i++)
        {
            if (b[i] == (i + 1))
                break;
            else
                a1[i] = a1[b[i] - 1];
        }

        printf("\nPrime number till n index -- > \n");
        for (k = 0; k < n; k++)
            printf("%lld", a1[k]);
    }
}
