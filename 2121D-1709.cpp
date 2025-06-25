#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long &x : a){scanf("%ld", &x);}
        std::vector<long> b(n); for(long &x : b){scanf("%ld", &x);}
        std::vector<std::pair<long,long>> w;

        for(long p = 0; p < n; p++){
            for(long q = 0; q < n - 1; q++){
                if(a[q] <= a[q + 1]){continue;}
                std::swap(a[q], a[q + 1]);
                w.push_back({1, q + 1});
            }
        }

        for(long p = 0; p < n; p++){
            for(long q = 0; q < n - 1; q++){
                if(b[q] <= b[q + 1]){continue;}
                std::swap(b[q], b[q + 1]);
                w.push_back({2,q + 1});
            }
        }

        for(long p = 0; p < n; p++){
            if(a[p] <= b[p]){continue;}
            std::swap(a[p], b[p]);
            w.push_back({3, p + 1});
        }

        printf("%ld\n", w.size());
        for(std::pair<long, long> &z : w){printf("%ld %ld\n", z.first, z.second);}
    }
}
