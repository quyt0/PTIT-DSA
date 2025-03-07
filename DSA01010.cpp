#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mkp make_pair
using namespace std;
typedef long long ll;
typedef double db;

int n, k, a[41], b[41];

void solve()
{
    int i = k;
    while (i > 0 && a[i] == n - k + i)
        i--;
    if (i == 0)
        cout << k;
    else
    {
        b[i] = a[i] + 1;
        for (int j = i + 1; j <= k; j++)
            b[j] = b[j - 1] + 1;
        int res = k;
        for (int j = 1; j <= k; j++)
        {
            for (int l = 1; l <= k; l++)
            {
                if (b[j] == a[l])
                {
                    res--;
                    break;
                }
            }
        }
        cout << res;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        solve();
        cout << '\n';
    }
    return 0;
}