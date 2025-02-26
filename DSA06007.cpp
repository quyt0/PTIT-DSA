#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mkp make_pair
using namespace std;
typedef long long ll;
typedef double db;

int a[1000001];
int b[1000001];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(a, a + n);
        
        int l, r;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                l = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != b[i])
            {
                r = i;
                break;
            }
        }

        cout << l + 1 << ' ' << r + 1 << '\n';
    }
    return 0;
}