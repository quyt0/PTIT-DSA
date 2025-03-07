#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mkp make_pair
using namespace std;
typedef long long ll;
typedef double db;

int n, a[11];

void solve()
{
    a[1] = n;
    int cnt = 1;
    int ok = 0;
    while (!ok)
    {
        cout << '(';
        for (int i = 1; i <= cnt; i++)
        {
            if (i > 1)
                cout << ' ';
            cout << a[i];
        }
        cout << ") ";

        int i = cnt;
        while (i > 0 && a[i] == 1)
            i--;
        if (i == 0)
            ok = 1;
        else
        {
            a[i]--;
            int d = cnt - i;
            cnt = i;
            int q = (d + 1) /  a[i];
            for (int j = 0; j < q; j++)
            {
                cnt++;
                a[cnt] = a[i];
            }
            int r = (d + 1) % a[i];
            if (r != 0)
            {
                a[++cnt] = r;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        solve();
        cout << '\n';
    }
    return 0;
}