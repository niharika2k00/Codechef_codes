/* 
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/START16C/problems/HCAGMAM1  
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
        int x, y, i, countOne = 0, subarrayLength = 0, max = 0, ans = 0;
        string s;
        cin >> x >> y;
        cin >> s;
        int len = s.length();

        for (i = 0; i < len; i++)
        {
            if (s[i] == '1')
            {
                countOne++;
                subarrayLength++;
            }

            if (subarrayLength > max)
                max = subarrayLength;

            if (s[i] == '0')
                subarrayLength = 0;
        }

        ans = x * countOne + y * max;
        cout << ans << endl;
    }

    return 0;
}