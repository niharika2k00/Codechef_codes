
/* 
________________________________________
  - By Niharika Dutta
 Code Link :   https://www.codechef.com/START8C/problems/JAVELIN
________________________________________
 */
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define ll long long
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    test
    {
        int n, m, x, i, count = 0;
        cin >> n >> m >> x;

        vector<int> a(n);
        vector<int> b;
        unordered_map<int, int> mp;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= m)
                count = count + 1;
            mp[a[i]] = i + 1;
        }

        sort(a.begin(), a.end(), greater<int>()); // nlogn

        if (count >= x)
        {
            cout << count << " ";
            for (i = 1; i <= count; i++)
                b.push_back(mp[a[i - 1]]);
        }
        else // when count < X
        {
            cout << x << " ";
            for (i = 1; i <= x; i++)
                b.push_back(mp[a[i - 1]]);
            // x = x - count;
        }

        sort(b.begin(), b.end());
        for (i = 0; i < b.size(); i++)
            cout << b[i] << " ";
        cout << endl;
    }

    return 0;
}