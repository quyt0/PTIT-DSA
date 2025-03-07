#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mkp make_pair
using namespace std;
typedef long long ll;
typedef double db;

int n, k, a[21], sum;
vector<vector<int>> res;
vector<int> v;

void dq(int pos)
{
    if (sum == k)
    {
        res.pub(v);
        return;
    }

    if (sum > k || pos >= n)
        return;

    sum += a[pos];
    v.pub(a[pos]);
    dq(pos);
    v.pob();
    sum -= a[pos];

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
        dq(0);
        if (res.size() == 0)
        {
            cout << "-1\n";
            continue;
        }
        cout << res.size() << ' ';
        for (vector<int> i : res)
        {
            cout << '{';
            for (int j = 0; j < i.size(); j++)
            {
                if (j > 0)
                    cout << ' ';
                cout << i[j];
            }
            cout << "} ";
        }
        res.clear();
        v.clear();
        cout << '\n';
    }
    return 0;
}