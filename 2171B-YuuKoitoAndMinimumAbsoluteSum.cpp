#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        if(a[0] < 0 && a.back() < 0){a[0] = a.back() = 0;}
        else if(a[0] < 0){a[0] = a.back();}
        else if(a.back() < 0){a.back() = a[0];}
        for(long p = 1; p + 1 < n; p++){a[p] = (a[p] > 0 ? a[p]: 0);}
        long diff = a.back() - a[0];
        printf("%ld\n", diff > 0 ? diff : -diff);
        for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
        puts("");
    }

}
