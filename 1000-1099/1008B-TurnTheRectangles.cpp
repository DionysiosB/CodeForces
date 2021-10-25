#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::pair<long, long>> a(n);
    for(long p = 0; p < n; p++){scanf("%ld %ld", &a[p].first, &a[p].second);}
    long cur(a[0].first > a[0].second ? a[0].first : a[0].second);
    bool possible(true);
    for(long p = 1; p < n; p++){
        long u = a[p].first > a[p].second ? a[p].first : a[p].second;
        long v = a[p].first < a[p].second ? a[p].first : a[p].second;
        if(cur >= u){cur = u;}
        else if(cur >= v){cur = v;}
        else{possible = false; break;}
    }

    puts(possible ? "YES" : "NO");

    return 0;
}
