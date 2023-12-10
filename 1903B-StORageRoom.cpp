#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<std::vector<ll> > M(n, std::vector<ll>(n, 0));
        std::vector<ll> a(n, 0);
        for(ll row = 0; row < n; row++){
            ll tmp((1LL << 30) - 1); //2^31 - 1
            for(ll col = 0; col < n; col++){
                ll x; scanf("%lld", &x);
                M[row][col] = x;
                if(col == row){continue;}
                tmp = tmp & x;
            }
            a[row] = tmp;
        }

        bool possible(true);
        for(ll row = 0; possible && row < n; row++){
            for(ll col = 0; possible && col < n; col++){
                if(row == col){continue;}
                if((a[row] | a[col]) != M[row][col]){possible = false;}
            }
        }

        if(possible){
            puts("YES");
            for(ll p = 0; p < n; p++){printf("%lld ", a[p]);}
            puts("");
        }
        else{puts("NO");}
    }

}
