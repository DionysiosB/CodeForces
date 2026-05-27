#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        if(n <= 1){puts("-1"); continue;}
        std::vector<long> b(n); long wait(-1);
        for(long p = 0; p < n; p++){
            if(wait > 0){b[p] = wait; wait = -1;}
            else if(v[p] == p + 1){b[p] = p + 2; wait = p + 1;}
            else{b[p] = p + 1;}
        }

        if(wait > 0){b[n - 1] = b[n - 2]; b[n - 2] = wait;}

        for(long p = 0; p < n; p++){printf("%ld ", b[p]);}
        puts("");
    }

}
