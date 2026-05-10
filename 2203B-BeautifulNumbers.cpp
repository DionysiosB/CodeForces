#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll x; scanf("%lld", &x);
        long v[10] = {0};
        long ds(0);
        while(x){
            int u = (x % 10);
            ds += u; ++v[u - (x == u)];  //CORNER CASE for leading zeros
            x /= 10;
        }
        long cnt(0), idx(9);
        while(idx && ds > 9){  //Could make it faster, but not worth it
            if(v[idx]){--v[idx]; ds -= idx; ++cnt;}
            else{--idx;}
        }

        printf("%ld\n", cnt);
    }

}
