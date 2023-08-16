#include<cstdio>
#include<vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::pair<long, long> > v(n);
        long idx(-1), gmn(1e9 + 7), gsmn(1e9 + 7);
        for(long p = 0; p < n; p++){
            long m; scanf("%ld", &m);
            long mn(1e9 + 7), smn(1e9 + 7);
            for(long q = 0; q < m; q++){
                long x; scanf("%ld", &x);
                if(x <= mn){smn = mn; mn = x;}
                else if(x < smn){smn = x;}
            }

            v[p] = std::make_pair(mn, smn);
            gmn = (gmn < mn) ? gmn : mn;
            if(smn < gsmn){gsmn = smn; idx = p;}
        }

        long long sum(0);
        for(long p = 0; p < n; p++){sum += (p != idx) ? v[p].second : gmn;}
        printf("%lld\n", sum);
    }

}
