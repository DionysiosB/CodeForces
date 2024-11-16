#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n + 1); for(long p = 1; p <= n; p++){scanf("%ld", &v[p]);}
        bool ans(true);
        for(long p = 1; p <= n && ans; p++){
            if(v[p] == p){continue;}
            else if(v[p] == p + 1 && p < n && v[p + 1] == p){
                long tmp = v[p]; v[p] = v[p + 1]; v[p + 1] = tmp;
            }
            else{ans = false;}
        }

        puts(ans ? "YES" : "NO");
    }

}
