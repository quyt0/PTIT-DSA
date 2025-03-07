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
        int n, m;
        cin >> n >> m;
        set<int> s;
        vector<int> v;
        
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }

        sort(a, a + n);
        sort(b, b + m);
        
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            s.insert(b[i]);
            int idx = find(a, a + n, b[i]) - a;
            if (idx < n)
            {
                v.pub(b[i]);
            }
        }
            
        for (int i : s)
            cout << i << ' ';
        cout << '\n';
        for (int i : v)
            cout << i << ' ';
        cout << '\n';
    }
    return 0;
}