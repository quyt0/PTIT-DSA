#include <bits/stdc++.h>
#define pub push_back
#define pop pop_back
#define mkp make_pair
using namespace std;
typedef long long ll;
typedef double db;

int x;

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    int da = abs(x - a.first);
    int db = abs(x - b.first);
    if (da == db)
        return a.second < b.second;
    return da < db;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n >> x;

        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }

        sort(v.begin(), v.end(), cmp);

        for (auto i : v)
            cout << i.first << ' ';
        cout << '\n';
    }
    return 0;
}