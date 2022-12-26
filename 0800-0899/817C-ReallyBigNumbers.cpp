#include <cstdio>
typedef long long ll;

bool check(ll x, ll s){

    ll y(x), digitSum(0);
    while(y > 0){digitSum += y % 10; y /= 10;}
    if(digitSum + s <= x){return true;}
    return false;
}

int main(){

    ll n, s; scanf("%lld %lld", &n, &s);
    ll left(0), right(n), smallest(n + 1);
    while(left <= right){
        ll mid = (left + right) / 2;
        if(check(mid, s)){smallest = mid; right = mid - 1;}
        else{left = mid + 1;}
    }

    printf("%lld\n", n - smallest + 1);

    return 0;
}
