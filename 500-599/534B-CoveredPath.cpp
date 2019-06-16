#include <cstdio>
#include <vector>

int main(){

    long v1, v2; scanf("%ld %ld\n", &v1, &v2);
    long t, d; scanf("%ld %ld\n", &t, &d);

    long vs = v1; long vf = v2;
    if(v1 > v2){vs = v2; vf = v1;}

    std::vector<long> sa(t, 0);
    std::vector<long> sb(t, 0);
    long ans(0);
    for(long p = 0; p < t; p++){sa[p] = vs + p * d; sb[t - 1 - p] = vf +  p * d;}
    for(long p = 0; p < t; p++){ans += (sa[p] < sb[p]) ? sa[p] : sb[p];}

    printf("%ld\n", ans);

    return 0;
}
