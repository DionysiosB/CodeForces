#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<" ";
    if(a<b)
        swap(a,b);
    a-=b;
    cout<<a/2;
    return 0;
}