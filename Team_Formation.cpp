/* 
________________________________________
----------------------------------------
 Author :  Niharika Dutta
 Code Link :    https://www.codechef.com/COOK132C/problems/TEAMFOR
________________________________________
----------------------------------------
 */
#include <bits/stdc++.h>
#include <iostream>

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
        int i, result, n, onlyProg = 0, onlyEng = 0, both = 0;
        cin >> n;
        string eng, prog;

        cin >> eng;
        cin >> prog;

        for (i = 0; i < n; i++)
        {
            if (prog[i] == '1' && eng[i] == '0')
                onlyProg++;
            else if (eng[i] == '1' && prog[i] == '0')
                onlyEng++;
            else if (prog[i] == '1' && eng[i] == '1')
                both++;
        }

        while (both * 2 > n)
            both--;

        result = min(onlyProg, onlyEng);
        // cout << "ans : \n " << onlyProg << " " << onlyEng << " " << both << endl;
        // cout << "result " << result << endl;

        cout << (result + both) << endl;
    }

    return 0;
}