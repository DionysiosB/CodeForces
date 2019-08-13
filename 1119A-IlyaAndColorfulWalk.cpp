#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    long left(0), right(n - 1);
    while(a[left] == a.back()){++left;}
    while(a[right] == a[0]){--right;}
    long distA = n - 1 - left;
    long distB = right;
    long mx = (distA > distB) ? distA : distB;
    printf("%ld\n", mx);

    return 0;
}
