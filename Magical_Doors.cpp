/* 
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :   https://www.codechef.com/START13C/problems/MAGDOORS 
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
        string s;
        int i, count = 0;

        cin >> s;

        if (s[0] == '0')
            count = 1;

        for (i = 1; i < s.length(); i++)
        {
            if (s[i] != s[i - 1])
                count++;
        }

        cout << count << endl;
    }

    return 0;
}