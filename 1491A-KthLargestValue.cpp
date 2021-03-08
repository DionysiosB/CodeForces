#include <cstdio>
#include <vector>

int main(){

    long n, q; scanf("%ld %ld", &n, &q);
    long cnt(0);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]); cnt += a[p];}
    while(q--){
        long w, s; scanf("%ld %ld", &w, &s);
        if(w == 1){--s; a[s] = 1 - a[s]; cnt += (2 * a[s] - 1);}
        else{printf("%d\n", s <= cnt);}
    }


}
