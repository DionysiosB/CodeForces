#include<iostream>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, l, r, k; scanf("%lld %lld %lld %lld", &n, &l, &r, &k);
        if(n % 2){printf("%lld\n", l); continue;}
        else if(n == 2){puts("-1"); continue;}

        ll res(1); bool fl(false);
        while(res <= r){
            if(res > l){
                fl = true;
                printf("%lld\n", k <= n - 2 ? l : res);
                break;
            }
            res *= 2;
        }

        if(!fl){puts("-1");}
    }
}
