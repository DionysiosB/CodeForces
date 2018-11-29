#include<cstdio>
#include<vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1, 0); for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}

    std::vector<std::vector<long> > f(n + 1, std::vector<long>(n + 1, 0));
    long ans(-1);
    for(long right = 1; right <= n; right++){
        long last(0);
        for(long left = 0; left < right; left++){
            f[left][right] = f[last][left] + 1;
            if(a[right] == a[left]){last = left;}
            ans = (ans > f[left][right]) ? ans : f[left][right];
        }
    }

    printf("%ld\n", ans);

    return 0;
}
