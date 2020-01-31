#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        std::vector<long> a(3); for(long p = 0; p < 3; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        long ans(0);
        if(a[2] > a[0] + a[1]){ans = a[0] + a[1];}
        else{ans = (a[0] + a[1] + a[2]) / 2;}
        printf("%ld\n", ans);
    }

    return 0;
}
