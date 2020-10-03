#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
	int n,m;
	cin>>n>>m;
	cout<<min(n,min(m,(m+n)/3));
	return 0;
}