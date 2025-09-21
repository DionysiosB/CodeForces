#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> f;
        long prev(-1), cnt(1);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x == prev){++cnt;}
            else if(p){f.push_back(cnt); cnt = 1;}
            prev = x;
        }
        f.push_back(cnt);


        sort(f.rbegin(), f.rend());
        long mxl(0);
        for(long p = 0; p < f.size(); p++){
            long tst = (p + 1) * f[p];
            mxl = (mxl > tst ? mxl : tst);
        }

        printf("%ld\n", mxl);
    }

}
