#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        for(long p = 1; p < n; p++){
            long x = (v[p - 1] < v[p] ? v[p - 1] : v[p]);
            v[p - 1] -= x; v[p] -= x;
        }

        bool res(true);
        for(long p = 1; res && p < n; p++){
            if(v[p - 1] > v[p]){res = false;}
        }

        puts(res ? "YES" : "NO");
    }

}
