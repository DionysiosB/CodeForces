#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
#define fr(i,a,b) for(int i=a;i<b;i++)
#define frn(i,a,b) for(int i=a;i>=b;i--)
#define vi vector<int>
#define pii pair<int,int>
#define vpi vector<pair<int,int>>
#define vvi vector<vector<int>>
#define test int t;cin>>t; while(t--)
#define mp make_pair
#define pb push_back
#define pu push
#define fi first
#define se second
#define mod 1000000007
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update> seti;
void fast() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int n,m;
int a[1000005][3];
int b[3][1000005];
int32_t main () {
    fast();
    cin>>n>>m;
    int k = min(n,m);
    if(k>3){
        int l = n*m;
        fr(i,0,l) cin>>m;
        cout<<"-1"<<endl;
    }
    else if(k==1){
        int l = n*m;
        fr(i,0,l) cin>>m;
        cout<<"0";
    }
    else{
        if(m>n){
            char r;
            fr(i,0,n) fr(j,0,m){
                cin>>r;
                b[i][j] = (r=='1');
            }
            //fr(i,0,n) {fr(j,0,m) cout<<b[i][j]; cout<<endl;}
            fr(i,0,n) fr(j,0,m) a[j][i] = b[i][j];
            swap(n,m);
        }
        else  {
                char r;
                fr(i,0,n) fr(j,0,m) {
                cin>>r;
                a[i][j] = (r=='1');            }
        }
      //  fr(i,0,n) {fr(j,0,m) cout<<a[i][j]; cout<<endl;}
        if(m==2){
            int dp[n+1][4];
            dp[0][0] = (a[0][0]^0LL) + (a[0][1]^0LL);
            dp[0][1] = (a[0][0]^1LL) + (a[0][1]^0LL);
            dp[0][2] = (a[0][0]^0LL) + (a[0][1]^1LL);
            dp[0][3] = (a[0][0]^1LL) + (a[0][1]^1LL);
            fr(i,1,n){
                fr(j,0,4){
                    if(j==0) dp[i][j] = min(dp[i-1][1],dp[i-1][2]) + (a[i][0]^0LL) + (a[i][1]^0LL);
                    else if(j==1) dp[i][j] = min(dp[i-1][0],dp[i-1][3]) + (a[i][0]^1LL) + (a[i][1]^0LL);
                    else if(j==2) dp[i][j] = min(dp[i-1][0],dp[i-1][3]) + (a[i][0]^0LL) + (a[i][1]^1LL);
                    else dp[i][j] = min(dp[i-1][1],dp[i-1][2]) + (a[i][0]^1LL) + (a[i][1]^1LL);
                }
            }
            int ans = 1e9;
            fr(i,0,4) ans = min(ans,dp[n-1][i]);
            cout<<ans;
        }
        else{
            int dp[n+1][8];
            dp[0][0] = (a[0][0]^0LL) + (a[0][1]^0LL) + (a[0][2]^0LL);
            dp[0][1] = (a[0][0]^1LL) + (a[0][1]^0LL) + (a[0][2]^0LL);
            dp[0][2] = (a[0][0]^0LL) + (a[0][1]^1LL) + (a[0][2]^0LL);
            dp[0][3] = (a[0][0]^1LL) + (a[0][1]^1LL) + (a[0][2]^0LL);
            dp[0][4] = (a[0][0]^0LL) + (a[0][1]^0LL) + (a[0][2]^1LL);
            dp[0][5] = (a[0][0]^1LL) + (a[0][1]^0LL) + (a[0][2]^1LL);
            dp[0][6] = (a[0][0]^0LL) + (a[0][1]^1LL) + (a[0][2]^1LL);
            dp[0][7] = (a[0][0]^1LL) + (a[0][1]^1LL) + (a[0][2]^1LL);
            
            fr(i,1,n){
                fr(j,0,8){
                    if(j==0) dp[i][j]  = min(dp[i-1][5],dp[i-1][2]) + (a[i][0]^0LL) + (a[i][1]^0LL) + (a[i][2]^0LL);
                    else if(j==1) dp[i][j] = min(dp[i-1][4],dp[i-1][3]) + (a[i][0]^1LL) + (a[i][1]^0LL) + (a[i][2]^0LL);
                    else if(j==2) dp[i][j] = min(dp[i-1][0],dp[i-1][7]) + (a[i][0]^0LL) + (a[i][1]^1LL) + (a[i][2]^0LL);
                    else if(j==3) dp[i][j] = min(dp[i-1][6],dp[i-1][1]) + (a[i][0]^1LL) + (a[i][1]^1LL) + (a[i][2]^0LL);
                    else if(j==4) dp[i][j] = min(dp[i-1][6],dp[i-1][1]) + (a[i][0]^0LL) + (a[i][1]^0LL) + (a[i][2]^1LL);
                    else if(j==5) dp[i][j] = min(dp[i-1][0],dp[i-1][7]) + (a[i][0]^1LL) + (a[i][1]^0LL) + (a[i][2]^1LL);
                    else if(j==6) dp[i][j] = min(dp[i-1][3],dp[i-1][4]) + (a[i][0]^0LL) + (a[i][1]^1LL) + (a[i][2]^1LL);
                    else if(j==7) dp[i][j] = min(dp[i-1][5],dp[i-1][2]) + (a[i][0]^1LL) + (a[i][1]^1LL) + (a[i][2]^1LL);
                    
                }
             //   cout<<endl;
            }
            int ans = 1e9;
            fr(i,0,8) ans = min(ans,dp[n-1][i]);
            cout<<ans;
        }
    }
}