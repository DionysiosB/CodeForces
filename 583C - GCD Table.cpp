#include<set>
#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
    multiset<int> table;
    int n;
    cin>>n;
    vector<int> ans;
    for(int i=0;i<n*n;++i)
    {
        int temp;
        cin>>temp;
        table.insert(temp);
    }
    while(table.size()>0)
    {
        int last=*(table.rbegin());
        ans.push_back(last);
        table.erase(table.find(*(ans.rbegin())));
        for(int i=0;i<ans.size()-1;++i)
        {
            multiset<int>::iterator it=table.find(__gcd(ans[i],ans[ans.size()-1]));
            if(it!=table.end())
            table.erase(it);
        }
        for(int i=0;i<ans.size()-1;++i)
        {
            multiset<int>::iterator it=table.find(__gcd(ans[i],ans[ans.size()-1]));
            if(it!=table.end())
            table.erase(it);
        }
    }
    for(int i=0;i<ans.size();++i)
        cout<<ans[i]<<" ";
    return 0;
}