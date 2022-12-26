#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, b; scanf("%ld %ld", &n, &b);
    std::vector<long> v(n);
    for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
    long cnt(0);
    std::vector<long> a;
    for(long p = 0; p < n; p++){
        cnt += 2 * (v[p] % 2) - 1;
        if(p + 1 < n && cnt == 0){
            long diff = v[p + 1] - v[p];
            if(diff < 0){diff = -diff;}
            a.push_back(diff);
        }
    }

    sort(a.begin(), a.end());
    long cuts(0);
    for(long p = 0; p < a.size(); p++){if(a[p] <= b){++cuts; b -= a[p];}}
    printf("%ld\n", cuts);

    return 0;
}
