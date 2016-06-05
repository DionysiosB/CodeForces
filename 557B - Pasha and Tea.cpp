#include<iostream>
#include<algorithm>
#include<iomanip>
#include<cstdio>
#include<vector>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n,w;
    cin>>n>>w;
    vector<double> arr;
    int lim=2*n;
    for(int i=0;i<lim;++i)
    {
        double temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    double a,b,c;
    a=w/(3.0*n);
    b=arr[0];
    c=arr[n]/2.0;
    printf("%.6lf",min(min(a,b),c)*3*n);
    return 0;
}