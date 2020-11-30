
//LINKS ::  https://www.codechef.com/LTIME90B/problems/XORCOMP

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ll long long
#define loop1(n) for (ll i = 0; i < (n); i++)
#define loop2(n) for (ll i = 1; i <= (n); i++)
// #define test ll t; cin>>t; while(t--)
#define test           \
    ll t;              \
    scanf("%lld", &t); \
    while (t--)

int main()
{
    // serve your dish
    test
    {
        int x, y, n, c = 0;
        scanf("%d%d%d", &x, &y, &n);
        for (int i = 0; i <= n; i++)
        {
            if ((x ^ i) < (y ^ i))
                c++;
        }
        printf("%d/n", c);
    }

    return 0;
}
