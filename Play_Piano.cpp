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
        string s;
        int i, flag = 1;
        cin >> s;
        for (i = 0; i < s.length(); i++)
        {
            if (s[i] == s[i + 1])
            {
                flag = 0;
                break;
            }
            else
                i++;
        }
        if (flag)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
return 0;
}