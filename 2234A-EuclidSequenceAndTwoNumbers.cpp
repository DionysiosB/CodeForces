#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n);
        for(long &x : v){scanf("%ld", &x);}
        sort(v.rbegin(), v.rend());
        bool possible(true);
        for(int p = 2; p < n; p++){
            if(v[p - 2] % v[p - 1] != v[p]){possible = false; break;}
        }

        if(possible){printf("%ld %ld\n", v[0] , v[1]);}
        else{puts("-1");}
    }

}
