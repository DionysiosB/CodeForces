#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    
    std::vector<std::pair<long, long> > data(n);

    for(int p = 0; p < n; p++){
        scanf("%ld %ld\n", &data[p].first, &data[p].second);
    }

    sort(data.begin(), data.end());

    bool happyAlex = 0;
    for(int p = 0; p < n - 1; p++){
        if(data[p].second > data[p + 1].second){happyAlex = 1;}
    }

    puts(happyAlex ? "Happy Alex" : "Poor Alex");

    return 0;
}
