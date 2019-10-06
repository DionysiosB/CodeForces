#include <cstdio>
#include <vector>
 
int main(){
 
    long n; scanf("%ld", &n);
    long x; scanf("%ld", &x);
    long s(x), t(x);
    std::vector<long> a(1, 1);
    for(long p = 1; p < n; p++){
        long y; scanf("%ld", &y);
        s += y;
        if(2 * y <= x){t += y; a.push_back(p + 1);}
    }
    
    if(2 * t > s){
        printf("%ld\n", a.size());
        for(long p = 0; p < a.size(); p++){printf("%ld ", a[p]);}
        puts("");
    }
    else{puts("0");}
    
    return 0;
}
