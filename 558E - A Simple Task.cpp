#include<iostream>
#include<cstdio>
#include<cstdlib>
#define DEBUG 0
using namespace std;
string s;
int q;
int lazy[400040][26],stree[400040][26];
void build(int st,int en,char alpha,int node,int idx)
{
    if(st==en)
    {
        if(alpha==s[st])
        {
            stree[node][idx]=1;
            lazy[node][idx]=-1;
        }
    }
    else
    {
        int mid=(st+en)/2;
        lazy[node][idx]=-1;
        build(st,mid,alpha,node*2,idx);
        build(mid+1,en,alpha,node*2+1,idx);
        stree[node][idx]=stree[node*2][idx]+stree[node*2+1][idx];
    }
}
int get_count(int st,int en,int node,int l,int r,int idx)
{
    if(l>en || r<st)
        return 0;
    if(lazy[node][idx]!=-1)
    {
        stree[node][idx]=(en-st+1)*lazy[node][idx];
        if(st!=en)
        {
            lazy[node*2][idx]=lazy[node][idx];
            lazy[node*2+1][idx]=lazy[node][idx];
        }
        lazy[node][idx]=-1;
    }
    if(st>=l && en<=r)
        return stree[node][idx];

    if(st!=en)
    {
        int mid=(st+en)/2;
        return get_count(st,mid,node*2,l,r,idx)+get_count(mid+1,en,node*2+1,l,r,idx);
    }
    return 0;
}
void update(int st,int en,int node,int l,int r,int val,int idx)
{
    if(lazy[node][idx]!= -1)
    {
        stree[node][idx]=(en-st+1)*lazy[node][idx];
        if(st!=en)
        {
            lazy[node*2][idx]=lazy[node][idx];
            lazy[node*2+1][idx]=lazy[node][idx];
        }
        lazy[node][idx]=-1;
    }
    if(l>en || st>r)
        return;
    if(st>=l && en<=r)
    {
        if(st!=en)
            lazy[node*2][idx]=lazy[node*2+1][idx]=val;
        stree[node][idx]=(en-st+1)*val;

        return;
    }
    if(st!=en)
    {
        int mid=(st+en)/2;
        update(st,mid,node*2,l,r,val,idx);
        update(mid+1,en,node*2+1,l,r,val,idx);
        int a=stree[node*2][idx];
        int b=stree[node*2+1][idx];
        stree[node][idx]=stree[node*2][idx]+stree[node*2+1][idx];
    }
}
int main(void)
{
    if(DEBUG==1)
        freopen("in.txt","r",stdin);
    int len;
    cin>>len>>q>>s;

    for(int i=0;i<26;++i)
    {
        build(0,len-1,i+'a',1,i);
    }
    while(q--)
    {
        int l,r,temp;
        cin>>l>>r>>temp;
        --l;--r;
        int arr[26];
        for(int i=0;i<26;++i)
        {
            arr[i]=get_count(0,len-1,1,l,r,i);
        }
        for(int i=0;i<26;++i)
        {
            if(arr[i]!=0)
            {
                update(0,len-1,1,l,r,0,i);
            }

        }
        if(temp==1)
        {
            for(int i=0;i<26;++i)
            {
                if(arr[i]!=0)
                {
                    update(0,len-1,1,l,l+arr[i]-1,1,i);
                    l=l+arr[i];
                }
            }
        }
        else
        {
            for(int i=25;i>=0;--i)
            {
                if(arr[i]!=0)
                {
                    update(0,len-1,1,l,l+arr[i]-1,1,i);
                    l=l+arr[i];
                }
            }
        }
    }
    for(int i=0;i<len;++i)
    {
        for(int j=0;j<26;++j)
        {
            int kaka=get_count(0,len-1,1,i,i,j);
            if(kaka>0)
            {
                cout<<(char)('a'+j);
                break;
            }
        }
    }
    return 0;
}