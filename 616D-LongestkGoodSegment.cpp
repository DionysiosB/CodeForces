#include <cstdio>
#include <vector>

int main(){

    const long N = 1e6 + 1;
    long n, k; scanf("%ld %ld\n", &n, &k);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> b(N, 0);

    long maxLength(0), left(0), right(0), count(0);
    for(long l = 0, r = 0; r < n; r++){
        if(b[a[r]] <= 0){++count;}
        ++b[a[r]]; 
        while(count > k){
            --b[a[l]];
            if(b[a[l]] <= 0){--count;}
            ++l;
        }

        if((r - l + 1) > maxLength){maxLength = r - l + 1; left = l; right = r;}
    }

    printf("%ld %ld\n", (left + 1), (right + 1));

    return 0;
}
