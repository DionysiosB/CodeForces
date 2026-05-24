#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::pair<long, int> > a(2 * n);
    for(long p = 0; p < n; p++){
        long l, r; scanf("%ld %ld", &l, &r);
        a[2 * p] = std::make_pair(l, -1);
        a[2 * p + 1] = std::make_pair(r, 1);
    }

    sort(a.begin(), a.end());
    int count(0); bool possible(true);
    for(long p = 0; p < a.size(); p++){
        count += a[p].second;
        if(count < -2){possible = false;}
    }

    puts(possible ? "YES" : "NO");

    return 0;
}
