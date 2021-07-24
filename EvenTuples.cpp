
//https://www.codechef.com/START6C/problems/ETUP
// STARTERS ---> 2021 (JULY)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define loop1(n) for (ll i = 0; i < (n); i++)
#define loop2(n) for (ll i = 1; i <= (n); i++)
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    test
    {
        ll n, q;
        cin >> n >> q;
        vi arr(n), Left, Right;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < q; i++)
            cin >> Left[i] >> Right[i];
    }

    return 0;
}