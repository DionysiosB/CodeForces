#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n), f; long mx(0);
        for(long p = 0; p < n; p++){
            scanf("%ld", &v[p]);
            if(v[p] > mx){mx = v[p]; f.push_back(p);}
        }
        f.push_back(n);
        //for(long p = 0; p < v.size(); p++){printf("** v[%ld] = %ld\n", p, v[p]);}
        //for(long p = 0; p < f.size(); p++){printf("=== f[%ld] = %ld\n", p, f[p]);}

        for(long p = f.size() - 2; p >= 0; p--){
            long start = f[p];
            long end = f[p + 1];
            for(long q = start; q < end; q++){printf("%ld ", v[q]);}
        }
        puts("");

    }

}
