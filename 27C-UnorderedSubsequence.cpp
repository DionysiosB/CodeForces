#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    if(n <= 2){puts("0"); return 0;}

    std::vector<long long> a(n); for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}
    long ind(-1);
    for(long p = 0; p + 1 < n; p++){
        if((a[p + 1] - a[p]) * (a[p] - a[0]) < 0){ind = p; break;}
    }


    if(ind < 0){puts("0");}
    else{printf("3\n1 %ld %ld\n", ind + 1, ind + 2);}

    return 0;
}
