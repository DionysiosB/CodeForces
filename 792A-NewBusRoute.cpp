#include <cstdio>
#include <vector>
#include <algorithm>


int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); 
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    long minDist(2e9), count(0);
    for(long p = 1; p < n; p++){
        long diff = a[p] - a[p - 1];
        if(diff == minDist){++count;}
        else if(diff < minDist){minDist = diff; count = 1;}
    }

    printf("%ld %ld\n", minDist, count);

    return 0;
}
