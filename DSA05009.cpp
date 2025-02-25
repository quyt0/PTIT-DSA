#include <bits/stdc++.h>
using namespace std;

int n, a[101], sum, flag;

void dq(int pos, int k) {
    if (flag) return;
    if (k == sum) {
        flag = 1;
        return;
    }
    if (k > sum || pos >= n) return;
    
    dq(pos + 1, k + a[pos]);
    dq(pos + 1, k);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        sum = 0;
        flag = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % 2 == 1) {
            cout << "NO\n";
            continue;
        }

        sum /= 2;
        dq(0, 0);
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}
