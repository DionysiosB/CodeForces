#include <iostream>
using namespace std;
long long int ones[200001],zeros[200001];
int main(void)
{
	string a,b;
	cin>>a>>b;
	if(b[0]=='0')
		zeros[0]=1;
	else
		ones[0]=1;
	for(int i=1;i<b.size();++i)
	{
		ones[i]=ones[i-1];
		zeros[i]=zeros[i-1];
		if(b[i]=='0')
			zeros[i]++;
		else
			ones[i]++;
	}
	long long int ans=0;
	int st=0,en=b.size()-a.size();
	for(int i=0;i<a.size();++i)
	{
		if(a[i]=='0')
		{
			ans+=ones[en];
				if(st!=0)
					ans-=ones[st-1];
		}
		else
		{
			ans+=zeros[en];
				if(st!=0)
					ans-=zeros[st-1];
		}
		st++;
		en++;
	}
	cout<<ans;
	return 0;
}