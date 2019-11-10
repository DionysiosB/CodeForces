#include <cstdio>
#include <vector>
#include <algorithm>
 
int main(){
    
    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    
    long cnt(0);
    for(long p = 0; p < n; p++){
        bool uniq(true);
        for(long q = 0; q < p; q++){if(a[p] % a[q] == 0){uniq = false; break;}}
        cnt += uniq;
    }
    
    printf("%ld\n", cnt);
    
    return 0;
}
