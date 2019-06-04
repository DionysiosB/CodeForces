#include <cstdio>
#include <vector>

typedef long long ll;

int check(ll s, ll t){
    int cnt(0);
    while(s > 0){
        if(t == 0 || ((s % 10) != (t % 10)) ){++cnt;}
        else{t /= 10;}
        s /= 10;
    }

    if(t > 0){return -1;}
    return cnt;
}



int main(){

    ll n; scanf("%lld", &n);
    ll x(0); 
    int minCnt(-1);
    while(x * x <= n){
        ++x;
        int tmp = check(n, x * x);
        if(tmp < 0){continue;}
        if(minCnt < 0 || tmp < minCnt){minCnt = tmp;}
    }

    printf("%d\n", minCnt);

    return 0;
}
