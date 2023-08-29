#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        std::vector<long> res; res.push_back(x);
        long w(1);
        while(w < x){
            if((x % w == 0) && (x % (2 * w) != 0)){
                x -= w;
                res.push_back(x);
            }
            w *= 2;
        }

        while(x > 1){res.push_back(x / 2); x /= 2;}

        printf("%ld\n", res.size());
        for(long p = 0; p < res.size(); p++){printf("%ld ", res[p]);}
        puts("");
    }

}
