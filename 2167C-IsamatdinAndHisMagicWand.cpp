#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n);
        bool z(false), a(false);
        for(long p = 0; p < n; p++){
            scanf("%ld", &v[p]);
            z |= (v[p] % 2 == 0);
            a |= (v[p] % 2 == 1);
        }

        if(z && a){sort(v.begin(), v.end());}
        for(long p = 0; p < n; p++){printf("%ld ", v[p]);}
        puts("");
    }

}
