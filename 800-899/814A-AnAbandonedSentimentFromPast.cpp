#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    if(k > 1){puts("Yes"); return 0;}

    std::vector<long> a(n);
    long index(-1), b(0);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]); if(a[p] == 0){index = p;}}
    scanf("%ld", &b);
    a[index] = b;

    bool sorted(true);
    for(long p = 1; p < n; p++){if(a[p - 1] >= a[p]){sorted = false; break;}}
    puts(sorted ? "No" : "Yes");

    return 0;
}
