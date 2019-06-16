#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

bool rightSort(std::pair<long, long> a, std::pair<long, long> b){
    if(a.second < b.second){return true;}
    else if(a.second == b.second){return a.first < b.first;}
    else{return false;}
}


int main(){

    long n; scanf("%ld", &n);
    std::vector<std::pair<long, long> > a(n);
    for(long p = 0; p < n; p++){
        long x, w; scanf("%ld %ld", &x, &w);
        a[p] = std::make_pair(x - w, x + w);
    }

    sort(a.begin(), a.end(), rightSort);

    long last(-2e9);
    long count(0);
    for(long p = 0; p < n; p++){
        if(a[p].first < last){continue;}
        ++count;
        last = a[p].second;
    }

    printf("%ld\n", count);

    return 0;
}
