#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> dv(n);
        for(long p = 0; p < n; p++){scanf("%ld", &dv[p]);}
        bool ans(true); long diff(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            dv[p] -= x;
            if(dv[p] < 0){
                if(diff){ans = false;}
                else{diff = dv[p];}
            }
        }

        for(long p = 0; ans && p < n; p++){
            if(dv[p] < 0){continue;}
            if(dv[p] + diff < 0){ans = false;}
        }

        puts(ans ? "YES" : "NO");
    }

}
