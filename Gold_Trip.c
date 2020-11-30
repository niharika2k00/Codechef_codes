
// LINKS :: https://www.codechef.com/ARYS2020/problems/GOLDTRIP

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, Q;
        scanf("%d", &n);
        int a[n], q, i, sum = 0, j, a, b;
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        scanf("%d", &Q);
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for (i = 0; i < Q; i++)
        {
            scanf("%d %d", &a, &b);
            for (i = (a - 1); i <= (b - 1); i++)
                sum = sum + a[i];

            printf("%d\n", sum);
            sum = 0;
        }
    }
    return 0;
}