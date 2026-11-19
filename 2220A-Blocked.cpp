#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    const int B = 107;

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n), w(B, 0);
        bool possible(true);
        for(long &x : v){
            scanf("%ld", &x);
            if(w[x]){possible = false;}
            w[x] = 1;
        }

        if(possible){
            sort(v.rbegin(), v.rend());
            for(long x : v){printf("%ld ", x);}
            puts("");
        }
        else{puts("-1");}
    }

}
