
//LINKS ::       https://www.codechef.com/LTIME98C/problems/REDALERT

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
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
        int n, d, h, i, total = 0, flag = 0;
        cin >> n >> d >> h;
        vi arr(n);
        for (i = 0; i < n; i++)
            cin >> arr[i];

        for (i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                total = total + arr[i];
                if (total > h)
                {
                    flag = 1;
                    break;
                }
            }
            if (arr[i] == 0)
            {
                if (total >= d)
                    total = total - d;
                else
                    total = 0;
            }
        }

        if (flag == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}