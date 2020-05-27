#include <cstdio>
#include <vector>
#include <algorithm>
 
int main(){
 
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> s(n); for(long p = 0; p < n; p++){scanf("%ld", &s[p]);}
        sort(s.begin(), s.end());
        long mn(s.back() + 7);
        for(long p = 1; p < n; p++){
            long diff = s[p] - s[p - 1];
            mn = (mn < diff) ? mn : diff;
        }
 
        printf("%ld\n", mn);
    }
 
    return 0;
}
