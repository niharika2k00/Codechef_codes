/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/LTIME105C/problems/PLPROCESS
 Time Complexity :
________________________________________
----------------------------------------
 */
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define loop1(n) for (ll i = 0; i < (n); i++)
#define loop2(n) for (ll i = 1; i <= (n); i++)
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)

void solve()
{
    int n, i, minTime = 0, sum = 0, res = 0;
    cin >> n;
    vector<int> vec(n);
    vector<int> prefixSum(n);

    for (i = 0; i < n; i++)
    {
        cin >> vec[i];
        sum = sum + vec[i];
    }

    if (n == 1)
    {
        cout << vec[0] << endl;
        return;
    }

    prefixSum[0] = vec[0];
    for (i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + vec[i];

    minTime = sum;

    for (i = 0; i < n; i++)
        minTime = min(max(prefixSum[i], sum - prefixSum[i]), minTime);

    /*  if (n > 1)
     {
         if (n % 2 == 0)
             res = sum / 2;
         else
             res = sum / 2 + 1;
     }
     else
         res = sum; */

    cout << minTime << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    test
    {
        solve();
    }

    return 0;
}