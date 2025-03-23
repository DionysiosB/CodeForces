#include <bits/stdc++.h>
#define int long long
using namespace std;


void solve() {
    string x, y; cin >> x >> y;
    int n = x.size();
    bool flag = false;
    for(int i = 0; i < n; ++i) {
      if ((x[i] > y[i]) == flag) swap(x[i], y[i]);
      flag |= (x[i] != y[i]);
    }
    cout << x << '\n' << y << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
