#include <iostream>

int main(){

    int64_t w, m, k; scanf("%lld %lld %lld\n", &w, &m, &k);
    int64_t b(1), d(0);

    int64_t count(0);
    while(w > 0){
        if(b > m){
            int64_t cand = (w /(k * d));
            int64_t add = (cand < (b - m)) ? cand : (b - m);
            count += add;
            w -= add * k * d;
            if(add <= 0){break;}
            m = b;
        }
        
        b *= 10; ++d;
    }

    printf("%lld\n", count);

    return 0;
}
