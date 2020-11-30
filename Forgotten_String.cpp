
// LINKS :: https://www.codechef.com/problems/FRGTNLNG

#include <iostream>
#include <vector>
#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define rep0(n) for (ll i = 0; i < (n); i++)
#define rep1(n) for (ll i = 1; i <= (n); i++)
#define test ll t; cin>>t; while(t--)
// #define test  ll t; scanf("%lld", &t);while (t--)

int main()
{
    test {
     int n, k,l;
      string s;
      map<string, bool> b;
        cin >> n >> k;
        vector<string> a(n);

        for (int i = 0; i < n; i++) 
            cin >> a[i];
   
        for (int i = 0; i < k; i++) {
            cin >> l;
            for (int j = 0; j < l; j++) {
                cin >> s;
                b[s] = true;  // for a key of s the value is TRUE
            }
        }

        for (string x : a) {
            if (b[x]) {
                cout << "YES ";
            } else {
                cout << "NO ";
            }
        }
        cout << endl;
    }
    return 0;
}