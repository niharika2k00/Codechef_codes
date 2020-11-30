
//LINKS ::  https://www.codechef.com/LRNDSA01/problems/CONFLIP

#include <stdio.h>
#include <stdlib.h>
#define ll long long
#define loop1(n) for (ll i = 0; i < (n); i++)
#define loop2(n) for (ll i = 1; i <= (n); i++)
#define test           \
    ll t;              \
    scanf("%lld", &t); \
    while (t--)

int main()
{
    // serve your dish
    test
    {
        int n, q, i, g, j;
        scanf("%d\n", &g);
        for (j = 0; j < g; j++)
        {
            scanf("%d %d %d\n", &i, &n, &q);
            if (i == q)
                printf("%d\n", n / 2);
            else
                printf("%d\n", n - (n / 2));
        }
    }
    return 0;
}