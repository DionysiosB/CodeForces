#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
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
void fast() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
bool myc(pair<string,int> a, pair<string,int> b) {
	if(a.fi == b.fi) return a.se<b.se;
	return a.fi<b.fi;
}

int32_t main() {
	fast();
	test{
		int n;
		string s;
		cin>>n>>s;
		int k = 0;
		stack<char> st;
		int r = n-1;
		while(s[r]=='1' && r>=0){
			st.pu('1');
			r--;
		}
		r = 0;
		while(s[r]=='0' && r<=n-1){
			st.pu('0');
			r++;
		}
		fr(i,r,n){
			if(s[i] == '0'){
				k=1;
				break;
			}
		}
		while(!st.empty()){
			if(st.top()=='1') break;
			cout<<st.top();
			st.pop();
		}
		if(k == 1) cout<<"0";
		while(!st.empty()){
			cout<<st.top();
			st.pop();
		}
		cout<<endl;
	}
	return 0;
}