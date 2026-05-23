#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>


int main(){

    long long n; scanf("%lld\n", &n);
    std::vector<long long> beauty(n);

    for(long p = 0; p < n; p++){scanf("%lld", &beauty[p]);}
    std::sort(beauty.begin(), beauty.end());

    long long minBeauty = beauty[0]; 
    long long maxBeauty = beauty[n -1];
    long long countMin(0), countMax(0);
    long long ways(1);

    if(minBeauty == maxBeauty){ways *= n * (n - 1) / 2;}
    else{
        for(long long p = 0; p < n; p++){
            if(beauty[p] == minBeauty){++countMin;}
            else{break;}
        }
        for(long long p = n - 1; p >= 0; p--){
            if(beauty[p] == maxBeauty){++countMax;}
            else{break;}
        }

        ways *= countMin * countMax;
    }

    printf("%lld %lld\n", maxBeauty - minBeauty , ways);

    return 0;
}
