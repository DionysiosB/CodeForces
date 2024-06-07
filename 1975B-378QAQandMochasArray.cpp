#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n);
        for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        long a(1e9 + 7);for(long p = 0; p < n; p++){a = (v[p] < a ? v[p] : a);}
        long b(1e9 + 7);
        for(long p = 0; p < n; p++){
            if(v[p] % a == 0){continue;}
            b = (v[p] < b ? v[p] : b);
        }

        bool ans(true);
        for(long p = 0; ans && p < n; p++){
            if((v[p] % a) && (v[p] % b)){ans = false;}
        }

        puts(ans ? "Yes" : "No");
    }

}
