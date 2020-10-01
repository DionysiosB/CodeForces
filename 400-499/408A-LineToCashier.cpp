#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define ld long double
#define ff first
#define ss second
#define pb push_back
#define all(x) x.begin(),x.end()
 
#define mp make_pair
#define bp __builtin_popcountll
#define MOD  998244353
const int N = 200005;
#define FAST ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);srand(time(NULL));
 
void solve()
{
     ll ans = INT_MAX;
     ll n;
     cin >> n;
     ll sz[n];
     for(ll i=0;i<n;i++)   cin >> sz[i];
     ll a[n][105];
     for(ll i=0;i<n;i++)
     {
          for(ll j=0;j<sz[i];j++)    cin >> a[i][j];
          ll sum = sz[i]*15;
          for(ll j=0;j<sz[i];j++)
          {
               sum += a[i][j]*5;
          }
          ans = min(ans,sum);
     }
     cout<<ans;
}
 
int main()
{
     FAST;
     ll t = 1;
    // cin >> t;
     while(t--)
     {
          solve();
     }
}
