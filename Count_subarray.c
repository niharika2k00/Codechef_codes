
// LINKS ::   https://www.codechef.com/LRNDSA07/problems/SUBINC

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
    {  //*****************************          O(n^2)          ******************************
        int sum = 0, d = 0, n;
        scanf("%d", &n);
        int a[n];
        loop1(n)
            scanf("%d", &a[i]);
        for (i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
            {
                d++;
                sum = sum + d;
            }
            else
                d = 0;
        }
        printf("%d\n", n + sum);
    }

    return 0;
}
