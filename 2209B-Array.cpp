#include <cstdio>
#include <vector>
#include <map>

int main(){


    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n, 0), w(n, 0), z(n, 0);
        for(long &x : v){scanf("%ld", &x);}

        for(int p = n - 1; p >= 0; p--){
            w[p] = z[p] = 0;
            for(long q = p + 1; q < n; q++){
                w[p] += (v[p] > v[q]);
                z[p] += (v[p] < v[q]);
            }

            w[p] = (w[p] > z[p] ? w[p] : z[p]);
        }

        for(long x : w){printf("%ld ", x);}
        puts("");
    }

}
