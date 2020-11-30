
//LINKS :: https://www.codechef.com/problems/ENCMSG

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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    {
        int n, i, swap, length;
        char temp;
        cin >> n;
        string s;
        cin >> s;
        length = s.length();
        if (length % 2 == 0) //even
        {
            for (i = 0; i < n; i = i + 2)       
               swap(s[i],s[i+1]);        
        }
        else
        {
            for (i = 0; i < n - 1; i = i + 2)
            {
                temp = s[i + 1];
                s[i + 1] = s[i];
                s[i] = temp;
            }
        }
        for (i = 0; i < length; i++)
            s[i] = 'z' - (s[i] - 'a');

        cout << s << "\n";
    }
    return 0;
}