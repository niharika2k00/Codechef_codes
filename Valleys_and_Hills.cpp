/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/DEC21C/problems/VANDH
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
        int i, hill, valley, zero = 0, one = 0;
        cin >> hill >> valley;
        // string str;
        vector<int> str;

        if (hill > valley)
        {
            one = hill;
            zero = hill + 1;
        }
        else if (hill < valley)
        {
            zero = valley;
            one = valley + 1;
        }
        else if (hill == valley)
        {
            zero = hill + 1;
            one = hill + 1;
        }

        int len = (zero + one);
        cout << "len: " << len;
        for (i = 0; i < len; i++)
        {
            if (i % 2 == 0 && zero != 0) //  even places
            {
                str[i] = 0;
                zero--;
            }
            else if (i % 2 != 0 && one != 0) // odd places
            {
                str[i] = 1;
                one--;
            }
        }

        // cout << str.size() << endl;
        // for (i = 0; i < len; i++)
        //     cout << str[i];

        cout << endl;
    }

    return 0;
}