#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v;

        long mxodd(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x % 2){mxodd = (mxodd > x ? mxodd : x);}
            else{v.push_back(x);}
        }

        if(v.size() == n){puts("0"); continue;}
        sort(v.begin(), v.end());
        long cnt(v.size());

        for(long p = 0; p < v.size(); p++){
            if(mxodd > v.back()){break;}
            else if(mxodd < v[p]){++cnt; break;}
            else{mxodd += v[p];}
        }

        printf("%ld\n", cnt);

    }

}
