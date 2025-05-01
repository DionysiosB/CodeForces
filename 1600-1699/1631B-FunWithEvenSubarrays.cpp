#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = n - 1; p >= 0; p--){scanf("%ld", &v[p]);}
        long idx(1), cnt(0);
        while(idx < n){
            if(v[idx] == v[0]){idx++;}
            else{
                ++cnt;
                idx *= 2;
            }
        }

        printf("%ld\n", cnt);
    }

}
