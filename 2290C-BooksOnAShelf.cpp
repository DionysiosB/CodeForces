#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long &x : v){scanf("%ld", &x);}
        sort(v.begin(), v.end());
        std::vector<long> w(n); int left(0), right(n - 1);
        long prev(-1), pprev(-1), cnt(0);
        for(long x : v){
            if(x != prev){w[left++] = x;}
            else{w[right--] = x;}
            if(x != pprev){++cnt;}
            pprev = prev; prev = x;
        }

        printf("%ld\n", cnt);
        for(long x : w){printf("%ld ", x);}
        puts("");
    }

}
