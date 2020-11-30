
//LINKS :: https://www.codechef.com/problems/KTTABLE

#include <stdio.h>

#define ll long long
#define rep0(n) for (ll i = 0; i < (n); i++)
#define rep1(n) for (ll i = 1; i <= (n); i++)
// #define test ll t; cin>>t; while(t--)
#define test  ll t; scanf("%lld", &t);while (t--)

int main()
{
    // serve your dish
     test
    {
        int n, i, count = 0,z;
        scanf("%d",&n);
        int a[n], b[n];
        for ( i = 0; i < n; i++)
            scanf("%d",&a[i]);
        for ( i = 0; i < n; i++)
            scanf("%d",&b[i]);
        // if(a[0] >= b[0])
        //     count++;
        for (i = 0; i < n; i++)
        {
            if (i == 0)
                z = a[i];
            else
                z = a[i] - a[i - 1];
            if (z >= b[i])
                count++;
        }        
        printf("%d\n",count);
    }
    
    return 0;
}