#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k,i,j;
	cin>>n>>k;

	int arr[n];
	int min=110,max=0;
	for(i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i] > max){
			max = arr[i];
		}

		if(arr[i] < min){
			min = arr[i];
		}
	}

	if(max > min + k){
		cout<<"NO\n";
	} else {
		cout<<"YES\n";
		int ans[n][max];
		
		for(i=0;i<n;i++){
			for(j=0;j<arr[i];j++){
				ans[i][j] = ((j+1) % k) + 1;
			}
			sort(ans[i],ans[i]+arr[i]);

			for(j=0;j<arr[i];j++){
				cout<<ans[i][j]<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}