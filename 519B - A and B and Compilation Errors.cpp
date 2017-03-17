#include<set>
#include<iostream>
#include<cstdio>
using namespace std;
multiset<int> f;
multiset<int> s;
multiset<int> t;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("in.txt","r",stdin);
    int n;
    cin>>n;
    int ele;
    for(int i=0;i<n;++i)
    {
        cin>>ele;
        f.insert(ele);
    }
    --n;
    for(int i=0;i<n;++i)
    {
        cin>>ele;
        s.insert(ele);
    }
    --n;
    for(int i=0;i<n;++i)
    {
        cin>>ele;
        t.insert(ele);
    }
    set<int>::iterator it1,it2;
    it1=f.begin();
    it2=s.begin();
    int flag=0;
    while(it2!=s.end())
    {
        if(*it1!=*it2)
        {
            cout<<*it1<<endl;
            flag=1;
            break;
        }
        ++it1;
        ++it2;
    }
    if(flag==0)
        cout<<*it1<<endl;
    it1=s.begin();
    it2=t.begin();
    flag=0;
    while(it2!=s.end())
    {
        if(*it1!=*it2)
        {
            cout<<*it1<<endl;
            flag=1;
            break;
        }
        ++it1;
        ++it2;
    }
    if(flag==0)
        cout<<*it1<<endl;
    
    t.clear();
    s.clear();
    f.clear();
    return 0;
}