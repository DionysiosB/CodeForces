#include <cstdio>
#include <vector>
#include <algorithm>


int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, c; scanf("%ld %ld", &n, &c);
        std::vector<long> a(n), b(n);
        for(long &x : a){scanf("%ld", &x);}
        for(long &x : b){scanf("%ld", &x);}
        long total(0);
        for(long p = 0; p < n; p++){
            if(a[p] >= b[p]){total += a[p] - b[p];}
            else{total = -1; break;}
        }

        if(total < 0){
            total = c;
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            for(long p = 0; p < n; p++){
                if(a[p] >= b[p]){total += a[p] - b[p];}
                else{total = -1; break;}
            }
        }

        printf("%ld\n", total);
    }


}
