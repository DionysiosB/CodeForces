#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n), b(n);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}

        long diff(0), chg(0);
        for(long p = 0; p < n; p++){
            diff += (a[p] != b[p]);
            chg += (a[p] - b[p]);
        }

        if(chg < 0){chg = -chg;}
        long res = chg + 1;
        res = (res < diff) ? res : diff;
        printf("%ld\n", res);
    }

}
