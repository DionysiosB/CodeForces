#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(void)
{
    int n;
    cin>>n;

    vector<int> four;
    four.push_back(3);
    four.push_back(2);
    four.push_back(2);

    vector<int> six;
    six.push_back(3);
    six.push_back(5);

    vector<int> eight;
    eight.push_back(7);
    eight.push_back(2);
    eight.push_back(2);
    eight.push_back(2);

    vector<int> nine;
    nine.push_back(7);
    nine.push_back(3);
    nine.push_back(3);
    nine.push_back(2);

    string s;
    cin>>s;
    vector<int> ans;
    int lim=s.size();
    for(int i=0;i<lim;++i)
    {
        if(s[i]=='4')
        {
            ans.insert(ans.end(),four.begin(),four.end());
        }
        else if(s[i]=='6')
        {
            ans.insert(ans.end(),six.begin(),six.end());
        }
        else if(s[i]=='8')
        {
            ans.insert(ans.end(),eight.begin(),eight.end());
        }
        else if(s[i]=='9')
        {
            ans.insert(ans.end(),nine.begin(),nine.end());
        }
        else if(s[i]>'1')
        {
            ans.push_back(s[i]-'0');
        }
    }
    sort(ans.rbegin(),ans.rend());
    vector<int>::iterator it=ans.begin();
    while(it!=ans.end())
    {
        cout<<*(it++);
    }
    return 0;
}