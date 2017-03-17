#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    vector<long long int> v;
    int n;
    cin>>n;
    int o=0,e=0;
    long long total=0;
    for(int i=0;i<n;++i)
    {
        long long int temp;
        cin>>temp;
        total+=temp;
        if(temp&1LL)
            o++;
        else
            e++;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    if(o&1LL)
    {
        for(int i=0;i<n;++i)
            if(v[i]&1)
            {
                total-=v[i];
                break;
            }
    }
    cout<<total;
    return 0;
}