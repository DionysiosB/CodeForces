#include<cstdio>
typedef long long ll;

long long n,m,k,x,y;

int main(){

    ll n, m, k; scanf("%lld %lld %lld", &n, &m, &k);
    if(k<n){printf("%lld 1\n", k + 1);}
    else{
        k -= n;
        ll x = k / (m - 1);
        x = n - x;
        ll y = k % (m-1);
        if(x % 2){y = m - y;}
        else{y += 2;}
        printf("%lld %lld\n", x, y);
    }

    return 0;
}
