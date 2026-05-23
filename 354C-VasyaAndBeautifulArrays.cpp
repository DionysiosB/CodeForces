#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    long m = a[0]; bool done(false);
    while(!done){
        done = true;
        for(long p = 0; p < n; p++){while(a[p] % m > k){--m; done = false;}}
    }

    printf("%ld\n", m);

    return 0;
}
