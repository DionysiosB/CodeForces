#include<cstdio>
#include<vector>

int main(){

    long n; scanf("%ld",&n);
    std::vector<long> f(n); for(long p = 0; p < n; p++){scanf("%ld", &f[p]);}

    long m; scanf("%ld",&m);
    long k, l, r, t; 
    long long res(0);
    while(m--){
        scanf("%ld",&k);

        if(k == 1){
            scanf("%ld %ld", &l, &r);
            res = 0;
            for(long p = l - 1; p < r; p++){res += f[p];}
            printf("%lld\n",res);
        }

        else{
            scanf("%ld %ld %ld", &l, &r, &t); 
            for(long p = l - 1; p < r; p++){f[p] ^= t;}
        }
    }

    return 0;
}
