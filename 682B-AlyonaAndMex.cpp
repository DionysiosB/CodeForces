#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> a(n, 0);
    for(long p = 0; p < n; p++){scanf("%ld ", &a[p]);}
    sort(a.begin(), a.end());
    long mex(1);
    for(long p = 0; p < n; p++){if(mex <= a[p]){++mex;}}
    printf("%ld\n", mex);

    return 0;
}
