
//LINKS :: https://www.codechef.com/PPW12020/problems/ANITGUY2
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define ll long long
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define loop1(n) for (ll i = 0; i < (n); i++)
#define loop2(n) for (ll i = 1; i <= (n); i++)
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
// #define test  ll t; scanf("%d", &t);while (t--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    {
        int i, j, p, c = 0, n, x;
        cin >> x;
        cin >> n;
        vi ar;
        for (i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            ar.pb(tmp);
        }
        for (i = 0; i < n; i++)
        {
            if (ar[i] < x)
                count++;
            p = ar[i];
            for (j = i + 1; j < n; j++)
            {
                p = p * ar[j];
                if (p < k)
                    c++;
                else
                    break;
            }
        }
        cout << c << "\n";
    }
    return 0;
}