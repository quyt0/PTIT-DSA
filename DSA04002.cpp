#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mkp make_pair
using namespace std;
typedef long long ll;
typedef double db;

const int mod = 1e9 + 7;

ll rev (ll n)
{
    ll ans = 0;
    while (n)
    {
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}

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
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << solve(n, rev(n)) << '\n';
    }
    return 0;
}