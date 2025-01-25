#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, l, r; scanf("%ld %ld %ld", &n, &l, &r);
        std::vector<long> vl, vs, vr;
        ll sum(0);
        for(long p = 1; p <= n; p++){
            long x; scanf("%ld", &x);
            if(p < l){vl.push_back(x);}
            else if(p <= r){vs.push_back(x); sum += x;}
            else{vr.push_back(x);}
        }

        sort(vl.begin(), vl.end());
        sort(vr.begin(), vr.end());
        sort(vs.rbegin(), vs.rend());


        ll diffA(0);
        for(long p = 0; p < vl.size() && p < vs.size(); p++){
            if(vl[p] < vs[p]){diffA += vl[p] - vs[p];}
            else{break;}
        }

        ll diffB(0);
        for(long p = 0; p < vr.size() && p < vs.size(); p++){
            if(vr[p] < vs[p]){diffB += vr[p] - vs[p];}
            else{break;}
        }

        printf("%lld\n", sum + (diffA < diffB ? diffA : diffB));
    }

}
