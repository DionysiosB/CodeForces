#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; long double d, h; scanf("%ld %Lf %Lf", &n, &d, &h);
        const long double area = 0.5 * d * h;
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        sort(b.begin(), b.end());
        long double total(0);
        for(long p = 0; p < n; p++){
            total += area;
            if(p > 0 && b[p - 1] + h > b[p]){
                long diff = b[p] - b[p - 1];
                long double ratio = (1 - diff / h);
                total -= ratio * ratio * area;
            }
        }

        printf("%.8Lf\n", total);
    }

}
