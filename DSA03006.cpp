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
        
        int a[51];
        int b[51];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(a, a + n);
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i] && a[i] != b[n - i - 1])
            {
                cout << "No\n";
                flag = 1;
                break;
            }
        }
        if (flag == 0) cout << "Yes\n";
    }
    return 0;
}