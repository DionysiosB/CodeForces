#include<cstdio>
typedef long long ll;

ll count(ll n, ll x, ll y, ll lower, ll upper){
    if((y < lower) || (x > upper) || (n == 0)){return 0;}
    if(n == 1){return 1;}
    ll mid = (lower + upper) / 2;
    return count(n / 2, x , y , lower, mid - 1) + count(n % 2, x , y , mid , mid) + count(n / 2, x, y, mid + 1, upper);
}

int main(){

    ll n, l, r; scanf("%lld %lld %lld", &n, &l, &r);
    ll maxn=1; while(maxn <= n){maxn *= 2;}
    printf("%lld\n", count(n, l, r, 1, maxn));

    return 0;
}
