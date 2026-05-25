#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        v.push_back(v.back() - 1);
        std::vector<long> d;
        for(long p = 1; p <= n; p++){
            if(v[p - 1] > v[p]){
                d.push_back(p);
                if(p > (n / 2)){break;}
            }
        }

        long g(0), s(0), b(0);
        if(d.size() > 3){
            d.pop_back();
            //for(long p = 0; p < d.size(); p++){printf("** %ld\n", d[p]);}
            g = d[0], s = d.back() - d[0], b = 0;
            //printf("==> %ld %ld %ld\n", g, s, b);
            for(long p = d.size() - 1; p > 0; p--){
                long diff = d[p] - d[p - 1];
                if(b <= g){b += diff; s -= diff;}
                else{break;}
                //printf("==> %ld %ld %ld\n", g, s, b);
            }
            //printf("==> %ld %ld %ld\n", g, s, b);
            if(g >= s || g >= b){g = s = b = 0;}
        }

        printf("%ld %ld %ld\n", g, s, b);
    }

    return 0;
}
