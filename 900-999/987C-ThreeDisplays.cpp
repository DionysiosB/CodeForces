#include<cstdio>
#include<vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> s(n); for(long p = 0; p < n; p++){scanf("%ld", &s[p]);}
    std::vector<long> c(n); for(long p = 0; p < n; p++){scanf("%ld", &c[p]);}

    std::vector<long> mc(n, 1e9 + 7);
    for(long p = 0; p < n; p++){
        for(long q = 0; q < p; q++){if(s[q] < s[p]){mc[p] = (mc[p] < c[q] + c[p]) ? mc[p] : (c[q] + c[p]);}}
    }

    long mn(1e9 + 5);
    for(long p = 0; p < n; p++){
        for(long q = 0; q < p; q++){if(s[q] < s[p]){mn = (mn < mc[q] + c[p]) ? mn : (mc[q] + c[p]);}}
    }

    printf("%ld\n", (mn < 1e9) ? mn : -1);

    return 0;
}
