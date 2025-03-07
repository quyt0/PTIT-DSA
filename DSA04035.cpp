#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mkp make_pair
using namespace std;
typedef long long ll;
typedef double db;

const int mod = 1e9 + 7;

ll solve(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            res *= a;
            res %= mod;
        }
        a *= a;
        a %= mod;
        b /= 2;
    }
    return res % mod;
}

int main()
{
    while (1)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            return 0;
        else
            cout << solve(a, b) << '\n';
    }
    return 0;
}