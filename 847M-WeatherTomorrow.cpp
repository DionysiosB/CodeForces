#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    long d = a[1] - a[0];
    bool progression(true);
    for(long p = 1; p < n; p++){if(a[p] - a[p - 1] != d){progression = false; break;}}
    printf("%ld\n", a.back() + (progression ? d : 0));

    return 0;
}
