#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        sort(v.begin(), v.end());
        long left(0), right(n - 1), cnt(0);
        while(left < right){
            long sum = v[left] + v[right];
            if(sum == k){++cnt; ++left; --right;}
            else if(sum < k){++left;}
            else if(sum > k){--right;}
        }

        printf("%ld\n", cnt);
    }

}
