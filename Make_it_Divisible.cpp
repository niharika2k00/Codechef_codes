/* 
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/START12C/problems/MAKEDIV3  
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
        int n, i;
        // string digit;
        cin >> n;

        if (n == 1)
            cout << "3\n";
        else if (n == 2)
            cout << "33\n";
        else
        {
            cout << "3";
            for (i = 1; i <= (n - 1); i++)
                cout << "0";
            cout << "3\n";
        }
    }

    return 0;
}