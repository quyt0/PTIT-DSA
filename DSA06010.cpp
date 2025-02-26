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

        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            while (x)
            {
                s.insert(x % 10);
                x /= 10;
            }
        }

        for (int i : s)
            cout << i << ' ';
        cout << '\n';
    }
    return 0;
}