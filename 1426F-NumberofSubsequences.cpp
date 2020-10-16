#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,n) for(int i=a ; i<n ; i++)
#define rf(i,n,a) for(int i=n ; i>=a ; i--)
#define F first
#define S second
#define all(c) (c).begin(),(c).end()
#define sz(v) (int)(v).size()
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;
typedef vector<pii> vpi;

const int inf = 1e9;
const int inf64 = 1e18;
const int MOD = inf + 7;

int32_t main() {
   fast;
   int n;
   cin >> n;

   string s;
   cin >> s;

   vector<vector<int>> dp(n + 1, vector<int>(3, 0));

   int cur = 1;

   for (int i = 1 ; i <= n ; i++) {
      if (s[i - 1] == 'a' || s[i - 1] == '?') {
         dp[i][0] = dp[i - 1][0] + cur;
         dp[i][1] = dp[i - 1][1];
         dp[i][2] = dp[i - 1][2];
      }
      if (s[i - 1] == 'b' || s[i - 1] == '?') {
         dp[i][0] += dp[i - 1][0];
         dp[i][1] += dp[i - 1][1] + dp[i - 1][0];
         dp[i][2] += dp[i - 1][2];
      }
      if (s[i - 1] == 'c' || s[i - 1] == '?') {
         dp[i][0] += dp[i - 1][0];
         dp[i][1] += dp[i - 1][1];
         dp[i][2] += dp[i - 1][2] + dp[i - 1][1];
      }
      if (s[i - 1] == '?') {
         cur = (cur * 3) % MOD;
      }
      dp[i][0] %= MOD;
      dp[i][1] %= MOD;
      dp[i][2] %= MOD;
   }
   cout << dp[n][2] << "\n";
}
