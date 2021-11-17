/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/START17C/problems/GCDPRF
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    test
    {
        lli i, n, flag = 0;
        cin >> n;
        vector<lli> b(n);

        for (i = 0; i < n; i++)
            cin >> b[i];

        for (i = 1; i < n; i++)
        {
            if ((b[i] > b[i - 1]) && (b[i - 1] % b[i] != 0))
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            cout << "-1";
        else
            for (i = 0; i < n; i++)
                cout << b[i] << " ";

        cout << endl;
    }
    return 0;
}