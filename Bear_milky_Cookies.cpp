// LINKS :: https://www.codechef.com/problems/COOMILK

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    {
        int n, flag = 1, i;
        cin >> n;
        string s[50]; // ARRAY OF STRINGS
        for (i = 0; i < n; i++)
            cin >> s[i];
        for (i = 0; i < n; i++)
        {
            if (s[i] == "cookie")
            {
                if (s[i] == s[i + 1]) // nxt is not "cookie"
                {
                    flag = 0;
                    break;
                }
                if ((s[i] != s[i + 1]) && (s[i + 1] != "milk")) //nxt is neither "cookie"  nor "milk"
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}