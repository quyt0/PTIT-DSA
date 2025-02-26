#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mkp make_pair
using namespace std;
typedef long long ll;
typedef double db;

const int nMax = 1e6;
int f[nMax + 1];

void solve(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (f[i] == 0 && f[n - i] == 0)
        {
            cout << i << ' ' << n - i;
            return;
        }
    }
    cout << -1;
}

int main()
{
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i * i <= nMax; i++)
    {
        if (f[i] == 0)
        {
            for (int j = i * i; j <= nMax; j += i)
                f[j] = 1;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
        cout << '\n';
    }
    return 0;
}