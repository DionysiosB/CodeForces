#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); long twos(0);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]); twos += (a[p] == 2);}
        if(twos % 2){puts("-1"); continue;}
        long cnt(0), idx(0);
        for(idx = 0; idx < n; idx++){
            cnt += (a[idx] == 2);
            if(2 * cnt == twos){break;}
        }

        printf("%ld\n", idx + 1);
    }

}
