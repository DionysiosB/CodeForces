#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<int> a(n); for(long p = 0; p < n; p++){scanf("%d", &a[p]);}

    long cnt(0);
    for(long p = 1; p < n - 1; p++){
        if(a[p]){continue;}
        if(a[p - 1] && a[p + 1]){a[p + 1] = 0; ++cnt;}
    }

    printf("%ld\n", cnt);

    return 0;
}
