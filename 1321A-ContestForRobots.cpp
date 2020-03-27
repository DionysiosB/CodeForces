#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
    long pts(0), cnt(0);
    for(long p = 0; p < n; p++){
        if(a[p] == b[p]){continue;}
        else if(a[p]){++cnt;}
        else if(b[p]){++pts;}
    }

    printf("%ld\n", cnt ? (1 + pts / cnt) : -1);

    return 0;
}
