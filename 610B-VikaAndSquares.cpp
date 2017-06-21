#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    int64_t n; scanf("%lld\n", &n);
    std::vector<int64_t> vol(n);
    for(int64_t p = 0; p < n; p++){scanf("%lld", &vol[p]);}

    std::vector<int64_t> smallest;
    int64_t minimum = vol[0];
    for(int64_t p = 0; p < n; p++){
        if(vol[p] == minimum){smallest.push_back(p);}
        if(vol[p] < minimum){minimum = vol[p]; smallest.clear(); smallest.push_back(p);}
    }

    smallest.push_back(n + smallest[0]);
    int64_t additional(0);
    for(int64_t p = 1; p < smallest.size(); p++){
        if(additional < smallest[p] - smallest[p - 1] - 1){additional = smallest[p] - smallest[p - 1] - 1;}
    }

    int64_t total = n * minimum + additional;
    printf("%lld\n", total);

    return 0;
}
