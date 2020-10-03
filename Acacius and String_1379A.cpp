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

int32_t main() {
	fast();
	test{
		int n;
		cin >> n;
		string s;
		cin >> s;
		string a = "abacaba";
		int st, e;
		int ans = 0;
		fr(i, 0, n - 6) {
			fr(j, i, i + 7) {
				if (s[j] != a[j - i])break;
				else if (j == i+6) ans++;
			}
		}
		if (ans > 1) cout << "No" << endl;
		else if (ans == 1) {
			cout << "Yes" << endl;
			fr(i, 0, n) {
				if (s[i] != '?')cout << s[i];
				else cout << "x";
			}
			cout<<endl;
		}
		else{
			ans = 0;
			//cout<<"end";
			fr(i, 0, n - 6) {
				vi v;
				int as = 0;
				fr(j, i, i + 7) {
					if (s[j] != a[j - i] && s[j] != '?')break;
					else {
						if (j == i + 6) {
							//cout<<"end";
							fr(k, i, i + 7) if (s[k] == '?') {s[k] = a[k - i]; v.pb(k);}
							as = 1;
						}
					}
				}
				if (as) {
					int alt = 0;
					fr(i, 0, n - 6) {
						fr(j, i, i + 7) {
							if (s[j] != a[j - i])break;
							else if (j == i+6) alt++;
						}
					}
					if (alt > 1) {
						for (auto x : v) s[x] = '?';
					}
					else if (alt == 1) ans = 1;
				}
				if (ans) break;
			}
			if (ans) {
				cout << "Yes" << endl;
				fr(i, 0, n) {
					if (s[i] != '?')cout << s[i];
					else cout << "x";
				}
				cout<<endl;
			}
			else cout<<"No"<<endl;
		}
	}
	return 0;
}