#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);
        std::vector<long> res(n, -1);
        res[0] = a; res[n - 1] = b;
        long cur = n;
        for(long p = 1; p < n - 1; p++){
            while(cur == a || cur == b){cur--;}
            res[p] = cur--;
        }

        long mn(n + 1), mx(-1);
        for(long p = 0; p < n / 2; p++){mn = (mn < res[p] ? mn : res[p]);}
        for(long p = n/2; p < n; p++){mx = (mx > res[p] ? mx : res[p]);}

        if(mn != a || mx != b){puts("-1"); continue;}
        for(long p = 0; p < n; p++){printf("%ld ", res[p]);};puts("");
    }

}
