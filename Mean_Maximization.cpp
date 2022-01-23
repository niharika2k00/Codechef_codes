/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/COOK137C/problems/MEANMAX
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
        int i, len;
        float sum = 0, mean1 = 0, mean2 = 0;
        cin >> len;
        vector<int> vec(len);

        for (i = 0; i < len; i++)
        {
            cin >> vec[i];
            sum = sum + vec[i];
        }

        sort(vec.begin(), vec.end());

        sum = sum - vec[len - 1]; //  sum - lastElement
        mean1 = sum / (len - 1);
        mean2 = vec[len - 1];

        cout << fixed << setprecision(6) << (mean1 + mean2) << endl;
    }

    return 0;
}