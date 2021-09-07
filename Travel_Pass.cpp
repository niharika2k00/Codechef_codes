/* 
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/SEPT21C/problems/TRAVELPS  
 Time Complexity :  
________________________________________
----------------------------------------
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
        int i, a, b, n, zero = 0, one = 0, sum = 0;
        cin >> n >> a >> b;
        string s;
        cin >> s;

        for (i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zero++;
            else
                one++;
        }

        sum = (zero * a) + (one * b);
        cout << sum << endl;
    }

    return 0;
}