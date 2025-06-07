#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}

        long add(-1e9), total(0);
        for(long p = 0; p < n; p++){
            total += (a[p] > b[p] ? a[p] : b[p]);
            long second = (a[p] < b[p] ? a[p] : b[p]);
            add = (add > second ? add : second);

        }
        total += add;
        printf("%ld\n", total);
    }

}
