#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        long mxd(a[1] - a[0]);
        for(long p = 3; p < n; p += 2){
            long diff = a[p] - a[p - 1];
            mxd = (mxd > diff ? mxd : diff);
        }

        printf("%ld\n", mxd);
    }

}
