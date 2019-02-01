#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

long n,m;
int k=0;
unsigned long long cost;
long long a[10000002],c[1000002],t,d,b=0;
vector<pair<long long,int>> p;

int main(){

	cin>>n>>m;
	for(long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long j=1;j<=n;j++){
		cin>>c[j];
		p.push_back(make_pair(c[j],j));
	}

	sort(p.begin(),p.end());

	for(long i=1;i<=m;i++){
		cost=0,b=0;
		
		cin>>t>>d;
		if(a[t]>=d){
			cost=(cost+(c[t]*d));
			a[t]=a[t]-d;	
		}
		else{
			cost += (c[t]*a[t]);
			d= d-a[t];
			a[t]=0;
			while(k<n && d>0){
				if(a[p[k].second]>=d){
					a[p[k].second] -= d;
					cost += (p[k].first * d);
					d=0;
					break;
				}	
				else{
					cost += (p[k].first * a[p[k].second]);
					d = d - a[p[k].second];
					a[p[k].second] = 0;
					k++;
				}
			}
			if(k==n && d>0){
				cost = 0;
			}
		}
		
		cout<<cost<<endl;
	}
	return 0;
}
