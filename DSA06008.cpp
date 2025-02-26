#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
#define mkp make_pair
using namespace std;
typedef long long ll;
typedef double db;

int search(int b[], int m, int x)
{
    int l = 0;
    int r = m;

    while (l < r)
    {
        int mid = (l + r) / 2;
        if (b[mid] < x)
        {
            l = mid + 1;
        }
        else
            r = mid;
    }

    return l;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[100001], b[100001];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        sort(b, b + m);
        
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                int k = search(b, m, a[i]);
                for (int j = 0; j < k; j++)
                {
                    cout << a[i] << ' ' << b[j] << '\n';
                }
            }
        }
    }


    return 0;
}