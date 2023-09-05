#include <cstdio>
#include <vector>

bool check(std::vector<long> s, long x){

    long l(0), r(1);
    while(r < s.size()){
        long cur = s[r] - ((l > 0) ? s[l - 1] : 0);
        if(cur == x){return true;}
        else if((cur > x) && (l + 1 < r)){++l;}
        else{++r;}
    }

    return false;
}

int main(){
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n), s(n);
        long cs(0);
        for(long p = 0; p < n; p++){scanf("%ld", &a[p]); cs += a[p]; s[p] = cs;} 
        long cnt(0);
        for(long p = 0; p < n; p++){cnt += check(s, a[p]);}
        printf("%ld\n", cnt);
    }

    return 0;
}
