#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long &x : a){scanf("%ld", &x);}
        sort(a.rbegin(), a.rend());
        long long b(0), c(0);
        for(long x : a){
            if(b < c){b += (1 << x);}
            else{c += (1 << x);}
        }

        printf("%lld\n", b * c);
    }

}
