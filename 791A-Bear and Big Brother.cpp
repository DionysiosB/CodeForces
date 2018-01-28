#include<iostream>
using namespace std;

int main(){
	int a,b;
    cin>>a>>b;
	int y=0;
	
	while(a<=b){
		a*=3;
		b*=2;
		++y;
	}
	cout<<y<<endl;
	
return 0;
}
