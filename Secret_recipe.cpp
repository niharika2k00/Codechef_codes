
//LINKS ::   https://www.codechef.com/problems/CHEFRUN

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define ll long long
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define loop1(n) for (ll i = 0; i < (n); i++)
#define loop2(n) for (ll i = 1; i <= (n); i++)
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
// #define test  ll t; scanf("%d", &t);while (t--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    {
        int x1, x2, x3;
        float t1, t2, v1, v2, path1, path2;
        cin >> x1 >> x2 >> x3 >> v1 >> v2;
        path1 = (x3 - x1);
        path2 = (x2 - x3);
        t1 = path1 / v1;
        t2 = path2 / v2;
        if (t1 < t2)
            cout << "Chef\n";
        else if (t2 < t1)
            cout << "Kefa\n";
        else if (t1 == t2)
            cout << "Draw\n";
    }

    return 0;
}
