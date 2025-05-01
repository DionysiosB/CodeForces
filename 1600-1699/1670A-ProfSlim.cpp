#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); long neg(0);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            neg += (a[p] < 0);
        }

        bool res(true);
        long prev = -1e9 - 7;
        for(long p = 0; res && p < neg; p++){
            if(a[p] >= 0){a[p] = -a[p];}
            if(a[p] < prev){res = false; break;}
            prev = a[p];
        }

        for(long p = neg; res && p < n; p++){
            if(a[p] <= 0){a[p] = -a[p];}
            if(a[p] < prev){res = false; break;}
            prev = a[p];
        }

        puts(res ? "YES" : "NO");
    }

}
