#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, h; scanf("%ld %ld", &n, &h);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    std::vector<long> v;
    long best(0);
    for(long p = 0; p < n; p++){
        v.push_back(a[p]);
        sort(v.begin(), v.end());

        long sum(0);
        for(long q = p % 2; q <= p; q += 2){sum += v[q];}
        if(sum <= h){best = p + 1;}
        else{break;}
    }

    printf("%ld\n", best);

    return 0;
}
