#include <cstdio>
#include <vector>
#include <map>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    std::map<long, long> m;
    long r(0);
    for(r = 0; r < n; r++){
        if(m.count(a[r])){++m[a[r]];}
        else{m[a[r]] = 1;}
        if(m.size() >= k){break;}
    }

    long l(0);
    while(l <= r){
        if(m.count(a[l]) && m[a[l]] > 1){--m[a[l]]; ++l;}
        else{break;}
    }

    if(m.size() < k){l = r = -2;}
    printf("%ld %ld\n", l + 1, r + 1);

    return 0;
}
