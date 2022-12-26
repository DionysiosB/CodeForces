#include <cstdio>
#include <map>

int main(){

    long long n, x; scanf("%lld %lld", &n, &x);
    std::map<long long, long long> array;
    std::map<long long, long long> xarray;
    for(long long p = 0; p < n; p++){
        long long a; scanf("%lld", &a);
        if(array.count(a) == 0){array[a] = 0;}
        ++array[a];
        long long b = a ^ x;
        if(xarray.count(b) == 0){xarray[b] = 0;}
        ++xarray[b];
    }

    long long total(0);
    for(std::map<long long, long long>::iterator mapIter = array.begin(); mapIter != array.end(); mapIter++){
        long long key = mapIter->first;
        if(xarray.count(key) == 0){continue;}
        long long val = mapIter->second;
        if(x != 0){total += val * xarray[key];}
        else if(x == 0 && val > 0){total += val * (val - 1);}
    }

    total /= 2;
    printf("%lld\n", total);

    return 0;
}
