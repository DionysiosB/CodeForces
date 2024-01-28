#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mn(0), mx(1e9 + 7);
        std::vector<long> v;
        for(long p = 0; p < n; p++){
            int a; long x; scanf("%d %ld", &a, &x);
            if(a == 1){mn = (mn > x ? mn : x);}
            else if(a == 2){mx = (mx < x ? mx : x);}
            else{v.push_back(x);}
        }

        long cnt(mx - mn + 1);
        for(long p = 0; p < v.size(); p++){
            if(mn <= v[p] && v[p] <= mx){--cnt;}
        }

        printf("%ld\n", (cnt > 0 ? cnt : 0));
    }

}
