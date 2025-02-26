#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mkp make_pair
using namespace std;
typedef long long ll;
typedef double db;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0, x; i < n; i++)
        {
            cin >> x;
            pq.push(x);
        }

        ll res = 0;
        while (pq.size() != 1)
        {
            ll sum = 0;
            sum += pq.top();
            pq.pop();
            sum += pq.top();
            pq.pop();
            pq.push(sum);
            res += sum;
        }

        cout << res << '\n';
    }
    return 0;
}