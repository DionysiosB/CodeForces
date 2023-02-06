#include <cstdio>
#include <vector>

bool sorted(const std::vector<long> &v){
    
    for(long p = 1; p < v.size(); p++){
        if(v[p - 1] > v[p]){return false;}
    }
    return true;
}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long cnt(0);
        while(!sorted(a)){
            for(long p = (cnt % 2); p + 1 < n; p += 2){
                if(a[p] > a[p + 1]){long x = a[p]; a[p] = a[p + 1]; a[p + 1] = x;}
            }
            ++cnt;
        }

        printf("%ld\n", cnt);
    }
}
