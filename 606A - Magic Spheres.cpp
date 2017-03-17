#include<iostream>
using namespace std;
int main(void)
{
    static int kam,zyaada;
	int a,b,c;
	cin>>a>>b>>c;
	int x,y,z;
	cin>>x>>y>>z;
    if(a<x)
        kam+=(x-a);
    else
        zyaada+=(a-x)/2;
    if(b<y)
        kam+=(y-b);
    else
        zyaada+=(b-y)/2;
    if(c<z)
        kam+=(z-c);
    else
        zyaada+=(c-z)/2;
    if(kam>zyaada)
        cout<<"No";
    else
        cout<<"Yes";

	return 0;
}