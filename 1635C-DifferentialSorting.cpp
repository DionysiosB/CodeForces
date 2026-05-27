#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<ll> a(n); for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}
        if(a[n - 2] > a[n - 1]){puts("-1");}
        else if(a[n - 1] < 0){
            bool sorted(true);
            for(long p = 1; p < n; p++){if(a[p - 1] > a[p]){sorted = false; break;}}
            puts(sorted ? "0" : "-1");
        }
        else{
            printf("%ld\n", n - 2);
            for(long p = 1; p < n - 1; p++){printf("%ld %ld %ld\n", p, n - 1, n);}
        }


    }

}
