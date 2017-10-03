#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int n;
	cin>>n;
	char s1[n],s2[n];
	cin>>s1>>s2;
	int check=0,diff;
	for(int i=0;i<n;i++){
		diff=s1[i]-s2[i];
		if(diff==0 || diff==32)
			check=0;
		else{
			if(diff<32)
				check=-1;
			else
				check=1;
		}
	}
	cout<<check<<endl;
	
	return 0;
}
