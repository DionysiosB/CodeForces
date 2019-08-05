#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    long ind(0), mx(0);
    for(long p = 0; p < n; p++){
        while(a[ind] + 5 < a[p]){++ind;}
        long cur = p - ind + 1; 
        mx = (mx > cur) ? mx : cur;
    }

    printf("%ld\n", mx);

    return 0;
}
