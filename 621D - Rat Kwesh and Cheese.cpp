#include <iostream>
#include <algorithm>
#include <vector>
#include <assert.h>
#include <cstdio>
#include <cmath>
using namespace std;
int main(void)
{
    //freopen("in.txt","r",stdin);
    double x,y,z;
    cin>>x>>y>>z;
    vector< pair<double,string> > final;
    double temp=0;

    if(x>1)
        ++temp;
    if(y>1)
        ++temp;
    if(z>1)
        ++temp;

    if(min(x,min(y,z))>1)
    {
        assert(y>1 && log(x)>0);
        temp=z*log(y)+log(log(x));
        final.push_back(make_pair(temp,"x^y^z"));

        assert(z>1 && log(x)>0);
        temp=y*log(z)+log(log(x));
        final.push_back(make_pair(temp,"x^z^y"));

        temp=log(y)+log(z)+log(log(x));
        final.push_back(make_pair(temp,"(x^y)^z"));

        temp=z*log(x)+log(log(y));
        final.push_back(make_pair(temp,"y^x^z"));

        temp=x*log(z)+log(log(y));
        final.push_back(make_pair(temp,"y^z^x"));

        temp=log(x)+log(z)+log(log(y));
        final.push_back(make_pair(temp,"(y^x)^z"));

        temp=y*log(x)+log(log(z));
        final.push_back(make_pair(temp,"z^x^y"));

        temp=x*log(y)+log(log(z));
        final.push_back(make_pair(temp,"z^y^x"));

        temp=log(x)+log(y)+log(log(z));
        final.push_back(make_pair(temp,"(z^x)^y"));

        double ans=final[0].first;
        string p=final[0].second;

        for(int i=1;i<final.size();++i)
        {
            if(final[i].first>ans)
            {
                ans=final[i].first;
                p=final[i].second;
            }
        }
        cout<<p;
    }
    else if(max(x,max(y,z))<=1 || temp==1)
    {
        temp=pow(x,pow(y,z));
        final.push_back(make_pair(temp,"x^y^z"));

        temp=pow(x,pow(z,y));
        final.push_back(make_pair(temp,"x^z^y"));

        temp=pow(pow(x,y),z);
        final.push_back(make_pair(temp,"(x^y)^z"));

        temp=pow(y,pow(x,z));
        final.push_back(make_pair(temp,"y^x^z"));

        temp=pow(y,pow(z,x));
        final.push_back(make_pair(temp,"y^z^x"));

        temp=pow(pow(y,x),z);
        final.push_back(make_pair(temp,"(y^x)^z"));

        temp=pow(z,pow(x,y));
        final.push_back(make_pair(temp,"z^x^y"));

        temp=pow(z,pow(y,x));
        final.push_back(make_pair(temp,"z^y^x"));

        temp=pow(pow(z,x),y);
        final.push_back(make_pair(temp,"(z^x)^y"));

        double ans=final[0].first;
        string p=final[0].second;

        for(int i=1;i<final.size();++i)
        {
            if(final[i].first>ans)
            {
                ans=final[i].first;
                p=final[i].second;
            }
        }
        cout<<p;
    }
    else if(x<=1)
    {
        temp=z*log(x)+log(log(y));
        final.push_back(make_pair(temp,"y^x^z"));

        temp=x*log(z)+log(log(y));
        final.push_back(make_pair(temp,"y^z^x"));

        temp=log(x)+log(z)+log(log(y));
        final.push_back(make_pair(temp,"(y^x)^z"));

        temp=y*log(x)+log(log(z));
        final.push_back(make_pair(temp,"z^x^y"));

        temp=x*log(y)+log(log(z));
        final.push_back(make_pair(temp,"z^y^x"));

        temp=log(x)+log(y)+log(log(z));
        final.push_back(make_pair(temp,"(z^x)^y"));

        double ans=final[0].first;
        string p=final[0].second;

        for(int i=1;i<final.size();++i)
        {
            if(final[i].first>ans)
            {
                ans=final[i].first;
                p=final[i].second;
            }
        }
        cout<<p;
    }
    else if(max(x,max(y,z))<=1 || temp==1)
    {
        temp=pow(x,pow(y,z));
        final.push_back(make_pair(temp,"x^y^z"));

        temp=pow(x,pow(z,y));
        final.push_back(make_pair(temp,"x^z^y"));

        temp=pow(pow(x,y),z);
        final.push_back(make_pair(temp,"(x^y)^z"));

        temp=pow(y,pow(x,z));
        final.push_back(make_pair(temp,"y^x^z"));

        temp=pow(y,pow(z,x));
        final.push_back(make_pair(temp,"y^z^x"));

        temp=pow(pow(y,x),z);
        final.push_back(make_pair(temp,"(y^x)^z"));

        temp=pow(z,pow(x,y));
        final.push_back(make_pair(temp,"z^x^y"));

        temp=pow(z,pow(y,x));
        final.push_back(make_pair(temp,"z^y^x"));

        temp=pow(pow(z,x),y);
        final.push_back(make_pair(temp,"(z^x)^y"));

        double ans=final[0].first;
        string p=final[0].second;

        for(int i=1;i<final.size();++i)
        {
            if(final[i].first>ans)
            {
                ans=final[i].first;
                p=final[i].second;
            }
        }
        cout<<p;

    }
    else if(y<=1)
    {
        temp=z*log(y)+log(log(x));
        final.push_back(make_pair(temp,"x^y^z"));

        assert(z>1 && log(x)>0);
        temp=y*log(z)+log(log(x));
        final.push_back(make_pair(temp,"x^z^y"));

        temp=log(y)+log(z)+log(log(x));
        final.push_back(make_pair(temp,"(x^y)^z"));

        temp=y*log(x)+log(log(z));
        final.push_back(make_pair(temp,"z^x^y"));

        temp=x*log(y)+log(log(z));
        final.push_back(make_pair(temp,"z^y^x"));

        temp=log(x)+log(y)+log(log(z));
        final.push_back(make_pair(temp,"(z^x)^y"));

        double ans=final[0].first;
        string p=final[0].second;

        for(int i=1;i<final.size();++i)
        {
            if(final[i].first>ans)
            {
                ans=final[i].first;
                p=final[i].second;
            }
        }
        cout<<p;
    }
    else if(z<=1)
    {
        temp=z*log(y)+log(log(x));
        final.push_back(make_pair(temp,"x^y^z"));

        assert(z>0 && log(x)>0);
        temp=y*log(z)+log(log(x));
        final.push_back(make_pair(temp,"x^z^y"));

        temp=log(y)+log(z)+log(log(x));
        final.push_back(make_pair(temp,"(x^y)^z"));

        temp=z*log(x)+log(log(y));
        final.push_back(make_pair(temp,"y^x^z"));

        temp=x*log(z)+log(log(y));
        final.push_back(make_pair(temp,"y^z^x"));

        temp=log(x)+log(z)+log(log(y));
        final.push_back(make_pair(temp,"(y^x)^z"));

        double ans=final[0].first;
        string p=final[0].second;

        for(int i=1;i<final.size();++i)
        {
            if(final[i].first>ans)
            {
                ans=final[i].first;
                p=final[i].second;
            }
        }
        cout<<p;


    }
    return 0;
}