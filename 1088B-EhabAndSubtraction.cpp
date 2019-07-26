#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, k; scanf("%ld %ld", &n, &k); 
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    for(long p = n - 1; p >= 1; p--){a[p] = a[p] - a[p - 1];}
    a.push_back(0);
    long pos(0);
    for(long p = 0; p < k; p++){
        printf("%ld\n", a[pos]);
        pos += (pos < n);
        while(pos < n && a[pos] == 0){++pos;}
    }
    
    return 0;
}
