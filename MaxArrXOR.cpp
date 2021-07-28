
//LINKS ::   https://www.codechef.com/START7C/problems/MAXARXOR

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

    test
    {
        ll int n, k, terms, ans;
        cin >> n >> k;
        terms = pow(2, n);
        ans = (terms - 1) * 2 * min(terms / 2, k);
        cout << ans << endl;
    }
    return 0;
}

/* 

For example take n = 3,
terms = 2*3 = 8
(8-1) = 7 

0   1   2   3   4   5   6   7   
if we add(BINARY OF) ----->
 0 with 7 ,
 1 with 6 ..... like this 
 then 
 value will always come (terms - 1)    -------------->   XOR PROPERTY 


 */