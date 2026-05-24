#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    bool b(0);
    for(long p = 0; p < n; p++){for(int q = p + 1; q < n; q++){b = a[p] < a[q] ? b : (1 - b);}}

    long m; scanf("%ld", &m);
    while(m--){
        long l, r; scanf("%ld %ld", &l, &r);
        if((r - l + 1) % 4 > 1){b = 1 - b;}
        puts(b ? "odd" : "even");
    }

    return 0;
}
