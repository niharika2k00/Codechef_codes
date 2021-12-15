/*
________________________________________
----------------------------------------
 Author    :  Niharika Dutta
 Code Link :  https://www.codechef.com/START20C/problems/GENE01
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

    char a, b;
    cin >> a >> b;

    if (a == b)
        cout << a << endl;
    else if (a == 'R' || b == 'R')
        cout << "R\n";
    else
        cout << "B\n";
    return 0;
}