
// LINKS :: https://www.codechef.com/problems/FRUITS

#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define rep0(n) for (ll i = 0; i < (n); i++)
#define rep1(n) for (ll i = 1; i <= (n); i++)
// #define test ll t; cin>>t; while(t--)
#define test         \
    ll t;            \
    scanf("%d", &t); \
    while (t--)

int main()
{
    test
    {
        int n, m, k, i,diff=0;
        scanf("%d %d %d",&n,&m,&k);
        if (k >= abs(n - m))
            printf("0\n");
        else if (n > m)
        {
            diff = n - m;
            if (diff > k)
            {
                m = k + m;
                printf("%d\n", abs(n - m));
            }
        }
        else
        {        n = n + k;
                printf("%d\n", abs(n - m));
        }
    }
    return 0;
}