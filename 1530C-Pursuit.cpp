#include <cstdio>
#include <vector>
#include <algorithm>

bool check(const std::vector<long> &a, const std::vector<long> &b, long k){
    long ra = (a.size() - 1 + k) / 4;
    long rb = (b.size() - 1 + k) / 4 - k; rb = (rb > 0 ? rb : 0);

    long diff = 100 * k + (a.back() - a[ra]) - (b.back() - b[rb]);
    return diff >= 0;
}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n + 1); for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n + 1); for(long p = 1; p <= n; p++){scanf("%ld", &b[p]);}
        sort(a.begin(), a.end()); for(long p = 1; p <= n; p++){a[p] += a[p - 1];}
        sort(b.begin(), b.end()); for(long p = 1; p <= n; p++){b[p] += b[p - 1];}

        long left(0), right(n + 1), res(0);
        while(left <= right){
            long mid = (left + right) / 2;
            if(check(a, b, mid)){res = mid; right = mid - 1;}
            else{left = mid + 1;}
        }

        printf("%ld\n", res);
    }

}
