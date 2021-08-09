
//LINKS ::         https://www.codechef.com/COOK131C/problems/CHFPLN

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

    /* 
Suppose for 5 : (n - 1) ways are there means 4 Unique ways 
----------- 
(1 , 4)
(2 , 3)
(3 , 2)
(4 . 1)

Array : 2   2   4   4   2   6
Frequency Array ==> 2 <- 3         max-unique =   1 (n - 1)    
                    4 <- 2         max-unique =   3
                    6 <- 1         max-unique =   5

*/

    test
    {
        ll n, i, count = 0;
        cin >> n;
        vector<ll> arr(n);
        map<ll, ll> mp;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++; // for the frequency array
        }

        for (i = 0; i < mp.size(); i++)
        {
            if (mp[i] != 0)
            {
                if (mp[i] >= i - 1)
                    count = count + (i - 1);
                else
                    count = count + mp[i];
            }
        }

        cout << count << endl;
    }
}
