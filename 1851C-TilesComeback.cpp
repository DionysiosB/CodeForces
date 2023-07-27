#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

        long left(0); long rem(k);
        for(left = 0; rem && left < n; left++){rem -= (a[left] == a[0]);}
        --left;

        long right(n - 1); rem = k;
        for(right = n - 1; rem && right >= 0; right--){rem -= (a[right] == a.back());}
        ++right;

        bool res = ((a[0] == a.back()) && !rem) || (left < right);
        puts(res ? "YES" : "NO");
    }

}
