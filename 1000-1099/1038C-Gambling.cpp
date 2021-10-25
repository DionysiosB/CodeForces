#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> va(n), vb(n);
    for(long p = 0; p < n; p++){scanf("%ld", &va[p]);}
    for(long p = 0; p < n; p++){scanf("%ld", &vb[p]);}
    sort(va.rbegin(), va.rend());
    sort(vb.rbegin(), vb.rend());
    long xa(0), xb(0);
    long long sa(0), sb(0);
    for(long p = 0; p < n; p++){
        if((xb >= n) || (xa < n && xb < n && va[xa] > vb[xb])){sa += va[xa]; ++xa;}
        else{++xb;}

        if((xa >= n) || (xa < n && xb < n && vb[xb] > va[xa])){sb += vb[xb]; ++xb;}
        else{++xa;}
    }

    printf("%lld\n", sa - sb);


    return 0;
}
