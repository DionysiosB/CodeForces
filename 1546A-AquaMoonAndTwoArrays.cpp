#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n), b(n);
        long sa(0), sb(0);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]); sa += a[p];}
        for(long p = 0; p < n; p++){scanf("%ld", &b[p]); sb += b[p];}
        if(sa != sb){puts("-1"); continue;}

        std::vector<long> plus, minus;
        for(long p = 0; p < n; p++){
            if(a[p] < b[p]){for(long u = 0; u < b[p] - a[p]; u++){plus.push_back(p + 1);}}
            else if(a[p] > b[p]){for(long u = 0; u < a[p] - b[p]; u++){minus.push_back(p + 1);}}
        }

        printf("%ld\n", plus.size());
        for(long p = 0; p < plus.size(); p++){printf("%ld %ld\n", minus[p], plus[p]);}
    }

}
