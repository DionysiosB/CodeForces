#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    long n; scanf("%ld", &n);
    ll s(0);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]); s += a[p];}
    long t(0), ind(0);
    for(long p = 0; p < n; p++){
        t += a[p]; 
        if(2 * t >= s){ind = p + 1; break;}
    }

    printf("%ld\n", ind);

    return 0;
}
