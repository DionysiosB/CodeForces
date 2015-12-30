#include<bits/stdc++.h>

using namespace std;

int main(){
    int r,x,y,x1,y1;
    long double dist;
    
    cin>>r>>x>>y>>x1>>y1;
    r = 2*r;

    long long int X = abs(x1-x);
    long long int Y = abs(y1-y);

    X = X*X;
    Y = Y*Y;

    long long int a = X+Y;

    dist = sqrtl((long long int)(X+Y));
    dist /= r;

    if(dist == (int)dist)
        cout<<(int)dist;
    else
        cout<<(int)dist+1;

    cout<<endl;
}