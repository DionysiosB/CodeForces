#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(3, 0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++a[x % 3];}
        long cnt = a[0];
        if(a[1] < a[2]){cnt += a[1] + (a[2] - a[1]) / 3;}
        else{cnt += a[2] + (a[1] - a[2]) / 3;}
        printf("%ld\n", cnt);
    }

    return 0;
}
