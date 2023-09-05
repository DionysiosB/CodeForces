#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long minus(n + 1), plus(n + 1);
        std::vector<long> a(n); 
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            if(minus > n && a[p] < 0){minus = p;}
            if(plus > n && a[p] > 0){plus = p;}
        }

        bool res(true);
        for(long p = 0; p < n; p++){
            long b; scanf("%ld", &b);
            if(b < a[p] && minus >= p){res = false;}
            if(b > a[p] && plus >= p){res = false;}
        }

        puts(res ? "YES" : "NO");
    oo}

    return 0;
}
