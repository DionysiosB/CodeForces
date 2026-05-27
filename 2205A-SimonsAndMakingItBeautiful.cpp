#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n);
        long idx(0);
        for(long p = 0; p < n; p++){
            scanf("%ld", &v[p]);
            if(v[p] == n){idx = p;}
        }

        long x = v[0]; v[0] = v[idx]; v[idx] = x;
        for(long x : v){printf("%ld ", x);}
        puts("");
    }

}
