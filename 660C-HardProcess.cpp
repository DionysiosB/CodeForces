#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld\n", &n, &k);
    std::vector<int> a(n + 1, 1); for(long p = 1; p <= n; p++){scanf("%d", &a[p]);}

    long zeros(0), left(0), right(0), length(0);
    for(long l = 0, r = 1; r <= n; r++){
        zeros += (a[r] == 0);
        while(l < r && zeros > k){++l; zeros -= (a[l] == 0);}
        if(length < r - l){length = r - l; left = l; right = r;}
    }

    printf("%ld\n", length);
    for(long p = 1; p <= n; p++){printf("%d ", ((left < p) && (p <= right)) ? 1 : a[p]);}

    return 0;
}
