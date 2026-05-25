#include <cstdio>
#include <vector>
#include <algorithm>

int main(){
    
    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    if(a[n - 1] >= a[n - 2] + a[n - 3]){puts("NO");}
    else{
        long temp = a[n - 2]; a[n - 2] = a[n - 1]; a[n - 1] = temp;
        puts("YES");
        for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
        puts("");
    }

    return 0;
}
