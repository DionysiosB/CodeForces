#include <cstdio>
#include <vector>

int  main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        bool ans(true);
        for(long p = 0; p < n; p++){long b; scanf("%ld", &b); a[p] -= b;}
        for(long p = 0; p < n; p++){
            if(a[p] < 0){
                long diff = a[p];
                for(long u = p; u < n; u++){
                    if(a[u] == diff){a[u] = 0;}
                    else if(a[u] == 0){break;}
                    else{ans = false;}
                }
                break;
            }
        }

        for(long p = 0; p < n; p++){if(a[p] != 0){ans = false; break;}}
        puts(ans ? "YES" : "NO");
    }

    return 0;
}
