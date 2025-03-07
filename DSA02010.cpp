#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mkp make_pair
using namespace std;
typedef long long ll;
typedef double db;

int n, k, a[21], sum, flag;
vector<int> v;

void dq(int pos)
{
    if (sum == k)
    {
        flag = 1;
        cout << '[';
        for (int i = 0; i < v.size(); i++)
        {
            if (i > 0) cout << ' ';
            cout << v[i];
        }
        cout << ']';
        return;
    }
    if (pos >= n || sum > k) return;

    sum += a[pos];
    v.pub(a[pos]);
    dq(pos);
    sum -= a[pos];
    v.pob();

    dq(pos + 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        dq(0);
        if (flag == 0)
            cout << -1;
        flag = 0;
        cout << '\n';
    }
    return 0;
}