#include <cstdio>
#include <vector>

int main(){

    long long n; scanf("%lld", &n);
    std::vector<long long> faceVec(n, 0);
    for(long long k = 0; k < n; k++){scanf("%lld", &faceVec[k]);}

    long long count(0);
    long long total(0);
    for(long long p = n - 1; p >= 0; p--){
        if(!faceVec[p]){++count;}
        else{total += count;}
    }

    printf("%lld\n", total);

    return 0;
}
