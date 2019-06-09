#include <cstdio>
#include <vector>

int main(){

    const long N = 1007;
    long n; scanf("%ld", &n);
    std::vector<bool> already(N, 0);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> b;
    for(long p = n - 1; p >= 0; p--){
        if(already[a[p]]){continue;}
        already[a[p]] = 1;
        b.push_back(a[p]);
    }

    printf("%ld\n", b.size());
    for(long p = b.size() - 1; p >= 0; p--){printf("%ld ", b[p]);}
    puts("");

    return 0;
}
