#include <cstdio>
#include <vector>

int main(){

    const long B = 1e5 + 7;
    std::vector<long> a(B, 0);

    long n; scanf("%ld", &n);
    long cnt(0);
    std::vector<long> v(n, 0); for(long p = 0; p < n; p++){scanf("%ld", &v[p]); ++a[v[p]]; cnt = (cnt > a[v[p]]) ? cnt : a[v[p]];}

    bool possible(true);
    for(long p = 2; p < B; p++){if(a[p - 1] < a[p]){possible = false; break;}}

    if(possible){
        printf("%ld\n", cnt);
        for(long p = 0; p < n; p++){printf("%ld ", a[v[p]]); --a[v[p]];};
        puts("");
    }
    else{puts("-1");}

    return 0;
}
