#include <iostream>
using namespace std;
int main(void)
{
	int n,s;
	cin>>n>>s;
	int ans=s;
	for(int i=0;i<n;++i)
	{
		int a,b;
		cin>>a>>b;
		ans=max(ans,a+b);
	}
	
	cout<<ans;
	return 0;
}