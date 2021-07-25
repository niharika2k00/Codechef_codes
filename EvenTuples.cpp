
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

//  ___________________   Factorial finding   ___________________
ll cal_n(ll n)
{
    ll temp = 1;
    for (ll i = 2; i <= n; i++)
        temp = temp * i;
    return temp;
}
//function to calculate nCr
ll nCr(ll n, ll r)
{
    return cal_n(n) / (cal_n(r) * cal_n(n - r));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    test
    {
        ll n, q, Odd = 0, Even = 0, i;
        cin >> n >> q;
        //   int even[n+1]={0};   <------  array
        vi arr(n + 1), evnTotal(n + 1, 0), oddTotal(n + 1, 0); // inital value set to 0
        for (i = 1; i <= n; i++)
            cin >> arr[i];

        for (i = 1; i <= n; i++)
        {
            if (arr[i] % 2 == 0)
                ++Even;
            else
                ++Odd;

            evnTotal[i] = Even;
            oddTotal[i] = Odd;
        }

        while (q--)
        {
            ll totalTuples, left, right;
            cin >> left >> right;
            Even = evnTotal[right] - evnTotal[left - 1];
            Odd = oddTotal[right] - oddTotal[left - 1];
            /* 
            EVEN + EVEN + EVEN =  EVEN 
            ODD + ODD + EVEN =  EVEN
             */
            totalTuples = nCr(Even, 3) + (nCr(Odd, 2) * Even);
            cout << totalTuples << endl;
        }
    }

    return 0;
}