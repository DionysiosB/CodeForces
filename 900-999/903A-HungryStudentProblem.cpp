#include <cstdio>
#include <vector>

int main(){
    
    const long N = 107;
    const long A = 3;
    const long B = 7;
    
    std::vector<bool> a(N);
    for(long p = 0; p < N; p++){a[p] = ((p % A == 0) || (p % B == 0) || (p >= A && a[p - A]) || (p >= B && a[p - B]));}
    
    
    long n; scanf("%ld", &n);
    while(n--){
        long x; scanf("%ld", &x);
        puts(a[x] ? "YES" : "NO");
    }

    return 0;
}
