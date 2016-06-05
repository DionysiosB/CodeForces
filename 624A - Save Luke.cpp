#include <iostream>
#include <cstdio>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(void)
{
    //freopen("in.txt","r",stdin);
    double d,l,v1,v2;
    cin>>d>>l>>v1>>v2;
    double left=l-d;
    v2+=v1;
    cout<<setprecision(20)<<left/v2;
    return 0;
}