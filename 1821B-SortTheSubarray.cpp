#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long left(-1), right(-1);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x == a[p]){continue;}
            left = (left < 0 ? p : left);
            right = p;
            a[p] = x;
        }

        while(left > 0 && a[left - 1] <= a[left]){--left;}
        while(right + 1 < n && a[right] <= a[right + 1]){++right;}
        printf("%ld %ld\n", left + 1, right + 1);
    }

}
