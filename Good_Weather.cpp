/* 
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :   https://www.codechef.com/START12C/problems/GOODWEAT 
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
        vector<int> v(7);
        int i, sunny = 0, rainny = 0;

        for (i = 0; i < 7; i++)
            cin >> v[i];

        for (i = 0; i < 7; i++)
        {
            if (v[i] == 0)
                rainny++;
            else
                sunny++;
        }

        if (sunny > rainny)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}