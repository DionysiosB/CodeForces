#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, q; scanf("%ld %ld", &n, &q);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        sort(v.rbegin(), v.rend());
        for(long p = 1; p < n; p++){v[p] += v[p - 1];}

        while(q--){
            long x; scanf("%ld", &x);
            long left(0), right(n - 1);
            if(x > v.back()){puts("-1"); continue;}
            long res(n - 1);
            while(left <= right){
                long mid = (left + right) / 2;
                if(x <= v[mid]){res = mid + 1; right = mid - 1;}
                else{left = mid + 1;}
            }

            printf("%ld\n", res);
        }


    }

}
