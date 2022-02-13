/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/FEB222C/problems/NOFIX
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

void solver()
{
    int len, i, k = 0, index = 0;
    cin >> len;
    vector<int> vec(len);

    for (i = 0; i < len; i++)
        cin >> vec[i];

    for (i = 0; i < len; i++)
    {
        index = (i + 1) + k;
        if (index == vec[i])
            k++;
        // cout << vec[i] << " ";
    }

    cout << k << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    test
    {
        the
        solver();
    }

    return 0;
}